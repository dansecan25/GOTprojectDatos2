//
// Created by dansecan on 24/11/22.
//

#ifndef GOTPROJECT_SERVERSOCKET_H
#define GOTPROJECT_SERVERSOCKET_H
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>

class ServerSocket {
    //ServerSocket();
public:
    int serverSock = socket(AF_INET, SOCK_STREAM, 0);
    int startServer();
};


#endif //GOTPROJECT_SERVERSOCKET_H
