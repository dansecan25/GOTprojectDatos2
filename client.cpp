//
// Created by dansecan on 24/11/22.
//
#include <iostream>
#include "commands.h"
#include "dbControl.h"
#include "ClientSocket.h"
using namespace std;
int main(int argc,char* argv[]) { //receives argc as number of characters received and argv as the array
    //compile g++ -o GOTClient.exe client.cpp ClientSocket.cpp
    //run is ./GOTClient.exe
    ClientSocket clientClass;
    clientClass.startClient(argc, argv);

    return 0;
}