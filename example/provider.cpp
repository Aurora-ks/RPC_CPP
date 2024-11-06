#include <iostream>
#include <string>
#include <rpc_server.h>
#include "hello.pb.h"

using namespace std;
using namespace hello;

class Hello : public HelloService {
public:
    // local method
    string hello(const string &name) {
        string res = "hello ";
        res += name;
        return res;
    }
    // rpc service
    void hello(::google::protobuf::RpcController *controller,
               const ::hello::req *request,
               ::hello::res *response,
               ::google::protobuf::Closure *done) override {
        // get args
        string name = request->name();
        // call local method
        string res = hello(name);
        // set response
        response->set_message(res);

        done->Run();
    }
};

int main() {
    RpcOptions opts;
    opts.port = 8000;
    RpcServer server(opts);
    Hello hello;
    try {
        server.RegisterService(&hello);
        server.Run();
    } catch (exception &e) {
        cout << "Exception:" << e.what() << endl;
    }
    return 0;
}
