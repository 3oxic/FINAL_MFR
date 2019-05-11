//
// Created by ntallaris on 16/4/2019.
//

#include "ClientPacket.h"

ClientPacket::ClientPacket(std::string packetType, std::string byteString, int sizeOf): packetType(packetType), byteString(byteString), sizeOf(sizeOf){}

ClientPacket::ClientPacket() {}

std::string ClientPacket::getByteString() {
    return byteString;
}

std::string ClientPacket::getPacketType() {
    return packetType;
}

int ClientPacket::getSizeOf() {
    return sizeOf;
}