//
// Created by ntallaris on 17/4/2019.
//

#ifndef GRPC_EXAMPLE_SERVERINFO_H
#define GRPC_EXAMPLE_SERVERINFO_H


#define MAX_MESSAGE_SIZE_BYTES 4194304
#include <vector>
#include <mutex>
#include "../Recipe/RecipeVector/RecipeVector.h"
typedef long long int (*func)(long long int,long long int);

template <class T>
class ServerInfo {

public:
    ServerInfo(): activeConnections(0){};

    int getActiveConnections() { return activeConnections; };
    void setActiveConnections(int newActiveConnections) { this->activeConnections = newActiveConnections; };

    std::vector<T> getData(){ return data; }
    void setData(std::vector<T> newData) {
        singleElementSize = sizeof(newData[0]);

        if(data.size()<newData.size()){
            data.resize(newData.size());

        }
        this->data = newData;
    }

    void setParallelizeData(bool pData){ this->parallelizeData = pData; }
    bool getParalelizeData(){ return this->parallelizeData; }

    bool ServerRunning(){ return serverRunning; }
    void setServerRunning(bool ServerRunning){ this->serverRunning = ServerRunning; }

    bool getSendingPhase(){ return sendingPhase; }
    void setSendingPhase(bool newSendingPhase) { this->sendingPhase = newSendingPhase; }

    int getTotalSendingElementsToClient() {
        adjustSendingElements();
        return totalSendingElementsToClient;
    }
    void setTotalSendingElementsToClient(int newValue) { this->totalSendingElementsToClient = newValue; }


    void adjustSendingElements(){
        long long int newTotal;
        long long int totalSendingBytes;
        if(sendingPhase == false){
            totalSendingElementsToClient = data.size() / activeConnections;
        }

        if((int) data.size() < totalSendingElementsToClient){
            totalSendingElementsToClient = data.size();
        }


        totalSendingBytes = totalSendingElementsToClient * singleElementSize;
        //std::cout << "TotalSendingBytes" << totalSendingBytes << std::endl;
        if((int) data.size() < activeConnections){
            totalSendingElementsToClient = data.size();
            return;
        }
        if(totalSendingBytes >= MAX_MESSAGE_SIZE_BYTES){
            newTotal =  MAX_MESSAGE_SIZE_BYTES - 10000;
            std::cout << "new total " << newTotal << std::endl;
            if(newTotal % singleElementSize != 0){
                newTotal = newTotal - (newTotal % singleElementSize);
            }
            totalSendingBytes = newTotal;
            totalSendingElementsToClient = totalSendingBytes/singleElementSize;

        }else{
            if(sendingPhase == false){
                totalSendingElementsToClient = data.size()/activeConnections;
                sendingPhase = true;
            }

        }
    }

    std::string getSOFilePath(){ return soFilePath; }
    void setSOFilePath(std::string path){ this->soFilePath = path; }

    RecipeVector getRecipe(){ return recipe; }
    void setRecipe(RecipeVector r) { this->recipe = r; }

    std::string getRecipeString(){ return recipeString; }
    void setRecipeString(std::string r){
        recipeString.resize(r.size());
        std::memcpy((char *)recipeString.data(), (char *)r.data(), r.size());
    }

    void setCPPFilePath(std::string s){ this->cppFilePath = s; }
    std::string getCPPFilePath(){ return cppFilePath; }


    void setFirstReduceResultReceived(bool r){ firstReduceResultReceived = r; }
    bool isFirstReduceReusltReceived(){ return firstReduceResultReceived; }

    void setReduceResult( long long int r ) { this->reduceResult = r; }
    long long int getReduceResult() { return reduceResult; }

    func getReduceFunc(){ return reduceFunc; }
    void setReduceFunc(func reduceF){ reduceFunc = reduceF; }

    int getReduceResultsCount(){ return reduceResultsCount; }
    void setReduceResultsCount(int r){ reduceResultsCount = r; }

    void setTimeStartMeasure( time_t start){ this->time_start_measure = start; }
    time_t getTimeStartMeasure(){ return time_start_measure; }


private:
    int activeConnections;
    std::vector<T> data;

    bool parallelizeData = false;

    bool serverRunning = false;

    bool sendingPhase = false;

    long int totalSendingElementsToClient;

    int singleElementSize;

    std::string soFilePath;

    RecipeVector recipe;
    std::string recipeString;

    long long int reduceResult;

    std::string cppFilePath;

    bool firstReduceResultReceived = true;

    func reduceFunc;

    int reduceResultsCount;

    time_t time_start_measure;
};


#endif //GRPC_EXAMPLE_SERVERINFO_H
