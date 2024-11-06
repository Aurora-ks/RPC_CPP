#ifndef RPCSERVER_H
#define RPCSERVER_H

#include <unordered_map>
#include <memory>
#include <google/protobuf/service.h>
#include "rpc_base.h"
#include "rpc_controller.h"

struct ServiceInfo {
    google::protobuf::Service *service;
    std::unordered_map<std::string, const google::protobuf::MethodDescriptor*> MethodMap;
};

class RpcServer : public RpcBase{
public:
    explicit RpcServer(const RpcOptions &opts);
    void RegisterService(google::protobuf::Service *service);
    void Run();
private:
    tcp::acceptor acceptor_;
    std::unordered_map<std::string, std::unique_ptr<ServiceInfo>> ServiceMap_;

    void DoAccept();
    void OnRead(std::shared_ptr<tcp::socket> socket);
    void OnWrite(std::shared_ptr<tcp::socket> socket, std::string &data);
    // Closure callback
    void OnResponse(std::shared_ptr<tcp::socket> socket, google::protobuf::Message *response);
};


#endif //RPCSERVER_H
