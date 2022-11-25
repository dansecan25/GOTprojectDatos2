#include <iostream>
#include "commands.h"
#include "dbControl.h"
#include "ServerSocket.h"
using namespace std;
//server
int main() { //receives argc as number of characters received and argv as the array
    //compile g++ -o GOTServer.exe main.cpp ServerSocket.cpp
    //run is ./GOTServer.exe
    //server connects to database and awaits commands from clients
    ServerSocket server;
    server.startServer();

    return 0;
}
