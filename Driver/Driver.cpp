//
// Created by ntallaris on 17/4/2019.
//

#include "Driver.h"


#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/archive/binary_iarchive.hpp>


//Driver::~Driver() {
//    delete(server);
//
//
//}
Driver::Driver(std::string ServerInfo): serverInfo(ServerInfo) {
    info.setParallelizeData(false);
    initServer();
}

Driver::Driver(std::string ServerInfo, std::string cppFilePath): serverInfo(ServerInfo) {
    info.setParallelizeData(false);
    compileCPPFile(cppFilePath);
    initServer();
}

Driver::Driver(std::string ServerInfo, std::string cppFilePath, RecipeVector recipe): serverInfo(ServerInfo) {


    std::string serial_str;
    boost::iostreams::back_insert_device<std::string> inserter(serial_str);
    boost::iostreams::stream<boost::iostreams::back_insert_device<std::string> > s(inserter);
    boost::archive::binary_oarchive oa(s);
    oa << recipe;
    s.flush();


    info.setRecipeString(serial_str);
    info.setParallelizeData(false);
    info.setRecipe(recipe);
    info.setCPPFilePath(cppFilePath);
    compileCPPFile(cppFilePath);
    initServer();
    std::cout << "Done Driver" << std::endl;
}

void Driver::parallelize() {
    if(server == NULL){
        initServer();
    }
    info.setParallelizeData(true);
}

void Driver::collect() {
    if(server == NULL){
        initServer();
    }
    if(info.getParalelizeData() == false){
        puts("im here");
        parallelize();
    }
}


void Driver::startServer() {
    server->Run();
}


void Driver::stopServer() {
    serverThread.join();
}
void Driver::initServer() {
    server = new Server(serverInfo, &info);
    serverThread = std::thread(&Driver::startServer, this);

}

void Driver::setData(std::vector<int> data) {
   info.setData(data);

}


void Driver::compileCPPFile(std::string cppFilePath) {
    std::string command = "/usr/bin/g++ " + cppFilePath + " -o /tmp/_functions.so -fPIC -shared -xc++ -";
    auto gcc = popen(command.c_str(),"w");
    pclose(gcc);
    info.setSOFilePath("/tmp/_functions.so");
}

void Driver::setDebugTime(time_t time) {
    info.setTimeStartMeasure(time);
}