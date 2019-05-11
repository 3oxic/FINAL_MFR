//
// Created by ntallaris on 15/4/2019.
//


#include "CallData.h"
#include "../Debug/hexdump/ΗexDump.h"


#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/archive/binary_iarchive.hpp>



CallData::CallData(sendData::SendData::AsyncService *service, grpc::ServerCompletionQueue *cq, ServerInfo<int>* info): service_(service), cq_(cq), responder_(&ctx_), status_(CREATE), info(info){
        // Invoke the serving logic right away.
        Proceed();

}

void CallData::Proceed() {

    if (status_ == CREATE) {
        // Make this instance progress to the PROCESS state.
        status_ = PROCESS;

        // As part of the initial CREATE state, we *request* that the system
        // start processing SayHello requests. In this request, "this" acts are
        // the tag uniquely identifying the request (so that different CallData
        // instances can serve different requests concurrently), in this case
        // the memory address of this CallData instance.
        service_->RequestsendRequest(&ctx_, &request_, &responder_, cq_, cq_, this);
    } else if (status_ == PROCESS) {
        // Spawn a new CallData instance to serve new clients while we process
        // the one for this CallData. The instance will deallocate itself as
        // part of its FINISH state.
        new CallData(service_, cq_, info);

//        // The actual processing.

        ClientPacket p = ClientPacket(std::string(request_.packettype()), std::string(request_.bytestring()), request_.sizeof_());
        packetHandler(p, &reply_);
//        std::cout << p.getPacketType() << std::endl;
        // And we are done! Let the gRPC runtime know we've finished, using the
        // memory address of this instance as the uniquely identifying tag for
        // the event.
        status_ = FINISH;
        responder_.Finish(reply_, grpc::Status::OK, this);
    } else {
        GPR_ASSERT(status_ == FINISH);
        // Once in the FINISH state, deallocate ourselves (CallData).
        delete this;
    }
}

void CallData::packetHandler(ClientPacket p, sendData::serverPacket *sp) {
    std::string packeType = p.getPacketType();

    if(packeType.compare("Connect") == 0){
        info->setActiveConnections(info->getActiveConnections()+1);
        //std::cout << info->getActiveConnections() << std::endl;
        //std::cout << "Client has been connected" << std::endl;
        sp->set_packettype("ConnectAck");
    }
    if(packeType.compare("dataReq") == 0){
        dataRequestHandler(sp);
    }
    if(packeType.compare("soReq") == 0){
        soFileHandler(info->getSOFilePath(), sp);
    }
    if(packeType.compare("recipeReq") == 0){
        recipeHandler(info->getRecipe(), sp);
    }
    if(packeType.compare("reduceAck") == 0){
        long long int result;

        std::string data;
        data = p.getByteString();

        std::memcpy(&result, data.data(), p.getSizeOf());
        //std::cout << "Received " << result << std::endl;


        if(info->isFirstReduceReusltReceived()){
            handle = dlopen("/tmp/_functions.so", RTLD_LAZY);
            if (!handle) {
                /* fail to load the library */
                fprintf(stderr, "Error: %s\n", dlerror());
            }
            *(long long int**)(&reduceFunction) = (long long int *)dlsym(handle, "reduceFunc1");
            info->setReduceFunc(reduceFunction);
            if (!reduceFunction) {
                /* no such symbol */
                fprintf(stderr, "Error: %s\n", dlerror());
                dlclose(handle);
            }else{
                info->setFirstReduceResultReceived(false);
                info->setReduceResult(result);
                info->setReduceResultsCount(1);
            }

        }else{

            info->setReduceResult(info->getReduceFunc()(info->getReduceResult(), result));
            info->setReduceResultsCount( info->getReduceResultsCount() + 1);

        }

        if(info->getReduceResultsCount() == info->getActiveConnections()){
            time_t end;

            time (&end); // note time after execution

            double difference = difftime (end,info->getTimeStartMeasure());
            printf ("time taken for function() %.2lf seconds.\n", difference );
            std::cout << "Reduce Result" << std::endl;
            std::cout << info->getReduceResult() << std::endl;

        }

    }
//    std::cout << haha << std::endl;


}

void CallData::dataRequestHandler( sendData::serverPacket *sp) {
    int sendingElementsToClient;
    ClientPacket p;
    std::string byteString;
//    int sendingElementsToClient;
//    std::cout << "Size " << info->getData().size() << std::endl;
    auto tempData = info->getData();
    if(info->getData().size() == 0 ){
        info->setTotalSendingElementsToClient(0);
        info->setSendingPhase(false);
        sp->set_packettype("NoDataAck");
        return;
    }

    if(info->getParalelizeData()){

        sendingElementsToClient = info->getTotalSendingElementsToClient();

        byteString.resize(sendingElementsToClient*sizeof(info->getData()[0]));
        std::memcpy((void *) byteString.data(), info->getData().data(), sendingElementsToClient * sizeof(info->getData()[0]));
//        std::cout << "Sending Elements = totalElements " << sendingElementsToClient << std::endl;
        tempData.erase(tempData.begin(), tempData.begin() + sendingElementsToClient);

        sp->set_packettype("moreDataAck");
        sp->set_bytestring(byteString);
        sp->set_totalsize(sendingElementsToClient);
        sp->set_singleelementsize(sizeof(info->getData()[0]));
        info->setData(tempData);

        return;
    }
    sp->set_packettype("WaitingForServerCall");
    return;

}

void CallData::soFileHandler(std::string cppFilePath,sendData::serverPacket *sp) {

    std::string content;

    std::ifstream fileReader(info->getSOFilePath().c_str() ,std::ios::binary|std::ios::ate);
    if (fileReader){
        auto fileSize = fileReader.tellg();
        fileReader.seekg(std::ios::beg);
        content = std::string(fileSize,0);
        fileReader.read(&content[0],fileSize);
    }
    sp->set_bytestring(content);
    sp->set_packettype("soAck");


}

void CallData::recipeHandler(RecipeVector recipe, sendData::serverPacket *sp) {
    RecipeVector recipe2;

    sp->set_packettype("recipeAck");
    sp->set_bytestring(info->getRecipeString());
    sp->set_totalsize(info->getRecipeString().size());

}
