//
// Created by ntallaris on 16/4/2019.
//

#ifndef GRPC_EXAMPLE_CLIENT_PACKET_H
#define GRPC_EXAMPLE_CLIENT_PACKET_H


#include <string>

class ClientPacket {

public:
    ClientPacket(std::string packetType, std::string byteString, int sizeOf);
    ClientPacket();
    std::string getPacketType();
    std::string getByteString();
    int getSizeOf();
private:
    std::string packetType;
    std::string byteString;
    int sizeOf;

};


#endif //GRPC_EXAMPLE_CLIENT_PACKET_H
