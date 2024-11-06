#ifndef RPC_CONTROLLER_H
#define RPC_CONTROLLER_H

#include <google/protobuf/service.h>
#include <string>

class Controller : google::protobuf::RpcController {
public:
    Controller();
    ~Controller() override = default;
    void Reset() override;
    bool Failed() const override;
    std::string ErrorText() const override;
    void StartCancel() override;
    void SetFailed(const std::string &reason) override;
    bool IsCanceled() const override;
    void NotifyOnCancel(google::protobuf::Closure *callback) override;
private:
    bool failed_;
    bool canceled_;
    std::string ErrorMessage_;
};

#endif //RPC_CONTROLLER_H
