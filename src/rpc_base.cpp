#include "rpc_base.h"

RpcBase::RpcBase(const RpcOptions& opts):options_(opts){
    buffer_.resize(1024);
}

RpcBase::~RpcBase() {
    context_.stop();
}
