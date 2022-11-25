//
// Created by dansecan on 24/11/22.
//

#include "ClientSocket.h"

int ClientSocket::startClient(int argc, char* argv[]) {
    //    string command= argv[1]; //stores the command
//    if(argc>0){
//        if(command=="got"){ //if the command is valid, continue with program
//            string instruction=argv[2]; //init <name>, help, add [-A][name], commit<message>, status <file>
//            cout<<"Command"<<endl;
//        }else exit(1); //else, throw error
//    } else {
//        exit(2);
//    }

    if(clientSocket==1){
        return 1;
    }
    //information
    sockaddr_in hint;
    hint.sin_family=AF_INET;
    hint.sin_port= htons(port);
    inet_pton(AF_INET,ipAddress.c_str(),&hint.sin_addr);
    int connectRes = connect(clientSocket, (sockaddr*)&hint, sizeof(sockaddr_in));
    if(connectRes==-1){
        return 1;
    }


    do{

    }while(true);
    return 0;
}