#ifndef RPCBASE_H
#define RPCBASE_H

#include <asio.hpp>
#include <vector>
using asio::ip::tcp;

class RpcOptions {
public:
    std::string host;
    unsigned int port;
};

class RpcBase{
public:
    explicit RpcBase(const RpcOptions &opts);
    RpcBase(const RpcBase&) = delete;
    RpcBase(const RpcBase&&) = delete;
    RpcBase& operator= (const RpcBase&) = delete;
    virtual ~RpcBase();
protected:
    asio::io_context context_;
    std::vector<char> buffer_;
    RpcOptions options_;
};

#endif //RPCBASE_H
