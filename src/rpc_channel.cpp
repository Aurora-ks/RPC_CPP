#include <string>
#include <google/protobuf/message.h>
#include "rpc_channel.h"
#include "rpc_message.pb.h"

Channel::Channel(const RpcOptions &opts) :RpcBase(opts), socket_(context_){
}

Channel::~Channel() {
    socket_.close();
}

void Channel::CallMethod(const google::protobuf::MethodDescriptor *method, google::protobuf::RpcController *controller,
                         const google::protobuf::Message *request, google::protobuf::Message *response,
                         google::protobuf::Closure *done) {
    try {
        socket_.connect(tcp::endpoint(asio::ip::address::from_string(options_.host), options_.port));
    }catch (std::exception &e) {
        controller->SetFailed(e.what());
    }
    // 定义传输头
    std::string ServiceName = method->service()->name();
    std::string MethodName = method->name();
    std::string args;
    if (!request->SerializeToString(&args)) {
        controller->SetFailed("serialize request error");
        socket_.close();
        return;
    }
    // 序列化协议头
    protocol::RpcHeader RpcHeader;
    RpcHeader.set_servicename(ServiceName);
    RpcHeader.set_methodname(MethodName);
    RpcHeader.set_argssize(args.size());

    std::string header;
    if(!RpcHeader.SerializeToString(&header)) {
        controller->SetFailed("serialize header error");
        socket_.close();
        return;
    }
    uint32_t HeaderSize = header.size();
    HeaderSize = asio::detail::socket_ops::host_to_network_long(HeaderSize);
    // 网络发送
    std::string data;
    data.reserve(sizeof HeaderSize + sizeof header + sizeof args);
    data.append(reinterpret_cast<char*>(&HeaderSize), sizeof HeaderSize);
    data.append(header);
    data.append(args);

    // std::cout << "------------RpcChannel-----------" << std::endl;
    // std::cout << "service:" << ServiceName << std::endl;
    // std::cout << "method:" << MethodName << std::endl;
    // std::cout << "args_size:" << args.size() << std::endl;
    // std::cout << "args:" << args << std::endl;
    // std::cout << "------------------------------" << std::endl;

    if (!OnWrite(controller, data)) {
        socket_.close();
        return;
    }
    OnRead(controller, response);
    socket_.close();
}

bool Channel::OnRead(google::protobuf::RpcController *controller, google::protobuf::Message *response) {
    int CurrentBufferSize = 0;
    int length;
    while (true) {
        asio::error_code ec;
        length = socket_.read_some(asio::buffer(buffer_.data()+CurrentBufferSize, buffer_.capacity()), ec);
        if(ec == asio::error::eof) break;
        if(ec) {
            controller->SetFailed("OnRead Error:"+ec.message());
            return false;
        }
        CurrentBufferSize += length;
    }
    protocol::RpcHeader header;
    if(!header.ParseFromArray(buffer_.data(), CurrentBufferSize)) {
        controller->SetFailed("parse header error");
        return false;
    }
    if(!response->ParseFromArray(buffer_.data(), CurrentBufferSize)) {
        controller->SetFailed("parse response error");
        return false;
    }
    return true;
}

bool Channel::OnWrite(google::protobuf::RpcController *controller, std::string &data) {
    int bytes = asio::write(socket_, asio::buffer(data));
    std::cout << "write bytes:" << bytes << std::endl;
    if(bytes != data.size()) {
        controller->SetFailed("write error");
        return false;
    }
    return true;
}
