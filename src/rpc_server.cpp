#include "rpc_server.h"
#include "rpc_message.pb.h"
#include <iostream>

RpcServer::RpcServer(const RpcOptions &opts)
    : RpcBase(opts), acceptor_(context_, tcp::endpoint(tcp::v4(), opts.port)) {
}

void RpcServer::RegisterService(google::protobuf::Service *service) {
    auto info = std::make_unique<ServiceInfo>();
    info->service = service;

    const google::protobuf::ServiceDescriptor *sDescriptor = service->GetDescriptor();
    int MethodCount = sDescriptor->method_count();

    for (int i = 0; i < MethodCount; i++) {
        const google::protobuf::MethodDescriptor *mDescriptor = sDescriptor->method(i);
        info->MethodMap.emplace(mDescriptor->name(), mDescriptor);
    }

    ServiceMap_.emplace(sDescriptor->name(), std::move(info));
}

void RpcServer::Run() {
    DoAccept();
    context_.run();
}


void RpcServer::DoAccept() {
    acceptor_.async_accept([this](std::error_code ec, tcp::socket socket) {
       if(ec) {
           std::cerr << "Accept Error:" << ec.message() << std::endl;
       }else {
           OnRead(std::make_shared<tcp::socket>(std::move(socket)));
       }
        DoAccept();
    });
}

void RpcServer::OnRead(std::shared_ptr<tcp::socket> socket) {
    // TODO:添加读入数据长度检验
    socket->async_read_some(asio::buffer(buffer_), [this, socket](std::error_code ec, std::size_t length) {
        if (ec) {
            std::cerr << "Read Error:" << ec.message() << std::endl;
            socket->close();
            return;
        }
        // 读取头长度
        uint32_t HeadSize;
        std::memcpy(&HeadSize, buffer_.data(), sizeof uint32_t);
        HeadSize = asio::detail::socket_ops::network_to_host_long(HeadSize);

        // 读取头数据反序列化
        protocol::RpcHeader header;
        std::string ServiceName, MethodName;
        uint32_t ArgsSize;
        if (header.ParseFromArray(buffer_.data() + sizeof uint32_t, HeadSize)) {
            ServiceName = header.servicename();
            MethodName = header.methodname();
            ArgsSize = header.argssize();
        } else {
            std::cerr << "Parse Header Error\n";
            socket->close();
            return;
        }
        std::string args(buffer_.data() + sizeof HeadSize + HeadSize, ArgsSize);
        // std::cout << "----------RpcServer------------" << std::endl;
        // std::cout << "service:" << ServiceName << std::endl;
        // std::cout << "method:" << MethodName << std::endl;
        // std::cout << "args_size:" << ArgsSize << std::endl;
        // std::cout << "args:" << args << std::endl;
        // std::cout << "------------------------------" << std::endl;

        // 获取descriptor
        auto serIt = ServiceMap_.find(ServiceName);
        if(serIt == ServiceMap_.end()) {
            std::cerr << ServiceName << " is not exist\n";
            socket->close();
            return;
        }
        auto service = serIt->second->service;
        auto methIt = serIt->second->MethodMap.find(MethodName);
        if(methIt == serIt->second->MethodMap.end()) {
            std::cerr << MethodName << " is not exist\n";
            socket->close();
            return;
        }
        auto MethodDescriptor = methIt->second;
        // 生成request response
        google::protobuf::Message *request = service->GetRequestPrototype(MethodDescriptor).New();
        if(!request->ParseFromString(args)) {
            std::cerr << "Request Parse Error\n";
            socket->close();
            return;
        }
        google::protobuf::Message *response = service->GetResponsePrototype(MethodDescriptor).New();
        // 调用Local Method
        auto closure = NewCallback(this, &RpcServer::OnResponse, socket, response);
        service->CallMethod(MethodDescriptor, nullptr, request, response, closure);
    });
}

void RpcServer::OnWrite(std::shared_ptr<tcp::socket> socket, std::string &data) {
    socket->async_write_some(asio::buffer(data.data(), data.size()), [this, socket](std::error_code ec, std::size_t bytes_transferred) {
       if(ec) {
           std::cerr << "send response error:" << ec.message() << std::endl;
       }
        std::cout << "writes bytes:" << bytes_transferred << std::endl;
    });
}

void RpcServer::OnResponse(std::shared_ptr<tcp::socket> socket, google::protobuf::Message *response) {
    std::string data;
    if(!response->SerializeToString(&data)) {
        std::cerr << "response parse error\n";
        socket->close();
        return;
    }
    OnWrite(socket, data);
}
