//
// Created by dansecan on 24/11/22.
//

#ifndef GOTPROJECT_CLIENTSOCKET_H
#define GOTPROJECT_CLIENTSOCKET_H
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include "iostream"

using namespace std;
class ClientSocket {
public:
    int clientSocket=socket(AF_INET, SOCK_STREAM, 0);
    int port=54000;
    string ipAddress="127.0.0.1"; //localhost ip adress


    int startClient(int argc, char* argv[]);
};


#endif //GOTPROJECT_CLIENTSOCKET_H
