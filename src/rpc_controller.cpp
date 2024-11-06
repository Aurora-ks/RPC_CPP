
#include "rpc_controller.h"

Controller::Controller() :failed_(false), canceled_(false){
}

void Controller::Reset() {
    failed_ = false;
    ErrorMessage_.clear();
}

bool Controller::Failed() const {
    return failed_;
}

std::string Controller::ErrorText() const {
    return ErrorMessage_;
}

void Controller::StartCancel() {
    canceled_ = true;
}

void Controller::SetFailed(const std::string &reason) {
    failed_ = true;
    ErrorMessage_ = reason;
}

bool Controller::IsCanceled() const {
    return canceled_;
}

void Controller::NotifyOnCancel(google::protobuf::Closure *callback) {
}
