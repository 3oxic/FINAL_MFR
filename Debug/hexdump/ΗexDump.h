//
// Created by ntallaris on 5/5/2019.
//

#ifndef GRPC_EXAMPLE_HEXDUMP_H
#define GRPC_EXAMPLE_HEXDUMP_H


#include <stdio.h>
#include <ctype.h>


#define HEXDUMP_COLS 16


class HexDump {
public:
    HexDump();
    HexDump(void *mem, unsigned int len);

    void print(void *mem, unsigned int len);
private:
    void hexdump();
    void hexdump2(void *memo, unsigned int leno);
    void *mem;
    unsigned int len;
};


#endif //GRPC_EXAMPLE_ΗEXDUMP_H
