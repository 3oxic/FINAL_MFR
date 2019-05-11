cmake_minimum_required(VERSION 3.10)
project(GRPC_EXAMPLE)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS "-g -Wall -Werror -std=c++14 -Wno-reorder")

find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS protos/sendData.proto)
PROTOBUF_GENERATE_GRPC_CPP(GRPC_SRCS GRPC_HDRS protos/sendData.proto)

add_executable(GRPC_EXAMPLE main.cpp ${PROTO_SRCS} ${GRPC_SRCS} Recipe/RecipeItem/RecipeItem.h Recipe/RecipeItem/RecipeItem.cpp Recipe/RecipeVector/RecipeVector.cpp Recipe/RecipeVector/RecipeVector.h Server/Server.cpp Server/Server.h Server/CallData.cpp Server/CallData.h Server/ClientPacket.cpp Server/ClientPacket.h Server/ServerInfo.h Driver/Driver.cpp Driver/Driver.h Debug/hexdump/hexdmp.cpp Debug/hexdump/ΗexDump.cpp Debug/hexdump/ΗexDump.h)
#add_executable(GRPC_SERVER ${PROTO_SRCS} ${GRPC_SRCS} Server/Server.cpp Server/Server.h Server/Services/_sendRequest.h Client/_stubClass/client_stub.cpp Client/_stubClass/client_stub.h)

TARGET_LINK_LIBRARIES(GRPC_EXAMPLE protobuf ${PROTOBUF_LIBRARY})
TARGET_LINK_LIBRARIES(GRPC_EXAMPLE grpc ${PROTOBUF_LIBRARY})
TARGET_LINK_LIBRARIES(GRPC_EXAMPLE grpc++ ${PROTOBUF_LIBRARY})
TARGET_LINK_LIBRARIES(GRPC_EXAMPLE pthread)
TARGET_LINK_LIBRARIES(GRPC_EXAMPLE boost_serialization)
TARGET_LINK_LIBRARIES(GRPC_EXAMPLE ${CMAKE_DL_LIBS})