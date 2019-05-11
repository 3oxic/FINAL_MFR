//
// Created by ntallaris on 17/4/2019.
//

#ifndef GRPC_EXAMPLE_DRIVER_H
#define GRPC_EXAMPLE_DRIVER_H

#include "../Server/Server.h"
#include "../Server/ServerInfo.h"
#include "../Recipe/RecipeVector/RecipeVector.h"
#include "../Recipe/RecipeItem/RecipeItem.h"
#include <thread>


class Driver {

public:
//    ~Driver();
    Driver(std::string ServerInfo);

    Driver(std::string ServerInfo, std::string SOFilePath);
    Driver(std::string ServerInfo, std::string SOFilePath, RecipeVector recipe);
    void parallelize();

    void collect();

    void setData(std::vector<int> data);

    void stopServer();

    void setDebugTime(time_t time);
private:
    std::string serverInfo;
    ServerInfo<int> info;
    Server* server = NULL;

    std::thread serverThread;

    void initServer();
    void startServer();
    void compileCPPFile(std::string cppFilePath);


};


#endif //GRPC_EXAMPLE_DRIVER_H
