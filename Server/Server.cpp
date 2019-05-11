//
// Created by ntallaris on 14/4/2019.
//

#include "Server.h"

Server::Server(std::string ServerDetails): ServerDetails(ServerDetails) {
}

Server::Server(std::string ServerDetails, ServerInfo<int>* nInfo): ServerDetails(ServerDetails), info(nInfo), RRCHandlersNumber(4){
}


void Server::Run() {
//
//    // Listen on the given address without any authentication mechanism.
    builder->AddListeningPort(ServerDetails, grpc::InsecureServerCredentials());
//    // Register "service" as the instance through which we'll communicate with
//    // clients. In this case it corresponds to an *synchronous* service.
    builder->RegisterService(service_);
    // Finally assemble the server.
    cq_ = builder->AddCompletionQueue();

    builder->SetMaxReceiveMessageSize(INT_MAX);
    server_ = builder->BuildAndStart();
    std::cout << "Server listening on " << ServerDetails << std::endl;
    info->setServerRunning(true);

    // This can be run in multiple threads if needed.


    HandleRpcs();
    // Wait for the server to shutdown. Note that some other thread must be
    // responsible for shutting down the server for this call to ever return.

}

void Server::HandleRpcs() {
    // Spawn a new CallData instance to serve new clients.
    new CallData(service_, cq_.get(), info);
    void* tag;  // uniquely identifies a request.
    bool ok;
    while (true) {
        // Block waiting to read the next event from the completion queue. The
        // event is uniquely identified by its tag, which in this case is the
        // memory address of a CallData instance.
        // The return value of Next should always be checked. This return value
        // tells us whether there is any kind of event or cq_ is shutting down.;
        GPR_ASSERT(cq_->Next(&tag, &ok));
        GPR_ASSERT(ok);
        static_cast<CallData*>(tag)->Proceed();
    }
}