#include <iostream>
#include <rpc_channel.h>
#include "hello.pb.h"
using namespace std;
using namespace hello;

int main() {
    RpcOptions opts;
    opts.host = "127.0.0.1";
    opts.port = 8000;
    Channel channel(opts);
    HelloService_Stub stub(&channel);
    req HelloReq;
    HelloReq.set_name("Ace");
    res HelloRes;
    try {
        stub.hello(nullptr, &HelloReq, &HelloRes, nullptr);
        cout << HelloRes.message() << endl;
    }catch (exception &e) {
        cout << "Exception:" << e.what() << endl;
    }
    return 0;
}