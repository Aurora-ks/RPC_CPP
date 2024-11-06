#ifndef CHANNEL_H
#define CHANNEL_H

#include <google/protobuf/service.h>
#include <google/protobuf/descriptor.h>
#include <asio.hpp>
#include "rpc_server.h"
using asio::ip::tcp;

class Channel : public google::protobuf::RpcChannel, public RpcBase{
public:
    explicit Channel(const RpcOptions &opts);
    ~Channel() override;
    void CallMethod(const google::protobuf::MethodDescriptor* method,
                          google::protobuf::RpcController* controller, const google::protobuf::Message* request,
                          google::protobuf::Message* response, google::protobuf::Closure* done) override;
private:
    tcp::socket socket_;

    bool OnRead(google::protobuf::RpcController *controller, google::protobuf::Message *response);
    bool OnWrite(google::protobuf::RpcController *controller, std::string &data);
};
#endif //CHANNEL_H
