//
// Created by ntallaris on 14/4/2019.
//




#ifndef GRPC_EXAMPLE_SERVER_H
#define GRPC_EXAMPLE_SERVER_H

#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "CallData.h"
#include "../sendData.grpc.pb.h"

#include "ServerInfo.h"
#include <thread>


class Server{
public:
    Server(std::string ServerDetails);

    Server(std::string ServerDetails, ServerInfo<int>* nInfo);

    void Run();
    void setData(std::vector<int> &data);
private:

    std::string ServerDetails;


    std::unique_ptr<grpc::Server> server_;
    sendData::SendData::AsyncService *service_ = new sendData::SendData::AsyncService();
    std::unique_ptr<grpc::ServerCompletionQueue> cq_;
    grpc::ServerBuilder *builder = new grpc::ServerBuilder();


    ServerInfo<int>* info;
    void HandleRpcs();

    std::vector<std::thread> RPCHandlers;
    int RRCHandlersNumber;



};


#endif //GRPC_EXAMPLE_SERVER_H
