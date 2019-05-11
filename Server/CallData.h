//
// Created by ntallaris on 15/4/2019.
//

#ifndef GRPC_EXAMPLE_CALLDATA_H
#define GRPC_EXAMPLE_CALLDATA_H

#include "../sendData.grpc.pb.h"
#include "ClientPacket.h"
#include "ServerInfo.h"
#include <zconf.h>

#include <fstream>
#include <dlfcn.h>

typedef long long int (*func)(long long int,long long int);

class CallData {
    public:
        // Take in the "service" instance (in this case representing an asynchronous
        // server) and the completion queue "cq" used for asynchronous communication
        // with the gRPC runtime.
        CallData(sendData::SendData::AsyncService* service, grpc::ServerCompletionQueue* cq, ServerInfo<int>* info);
        void Proceed();

private:
    sendData::SendData::AsyncService* service_;
    // The producer-consumer queue where for asynchronous server notifications.
    grpc::ServerCompletionQueue* cq_;
    // Context for the rpc, allowing to tweak aspects of it such as the use
    // of compression, authentication, as well as to send metadata back to the
    grpc::ServerContext ctx_;

    // What we get from the client.
    sendData::clientPacket request_;
    // What we send back to the client.
    sendData::serverPacket reply_;

    // The means to get back to the client.
    grpc::ServerAsyncResponseWriter<sendData::serverPacket> responder_;

    // Let's implement a tiny state machine with the following states.
    enum CallStatus { CREATE, PROCESS, FINISH };
    CallStatus status_;

    void packetHandler(ClientPacket p, sendData::serverPacket *sp);


    void dataRequestHandler(sendData::serverPacket *sp);

    void soFileHandler(std::string soFilePath,sendData::serverPacket *sp);

    void recipeHandler(RecipeVector recipe, sendData::serverPacket *sp);
    ServerInfo<int> *info;

    void *handle;
    func reduceFunction;
    long long int reduceResult;

};



#endif //GRPC_EXAMPLE_CALLDATA_H
