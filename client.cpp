//
// Created by dansecan on 24/11/22.
//
#include <iostream>
#include "commands.h"
#include "dbControl.h"
using namespace std;
int main(int argc,char* argv[]) { //receives argc as number of characters received and argv as the array
    //compile g++ -o GOTClient.exe client.cpp ob.o obn.o
    //run is ./GOTClient.exe
    string command= argv[1]; //stores the command
    if(argc>0){
        if(command=="got"){ //if the command is valid, continue with program
            string instruction=argv[2]; //init <name>, help, add [-A][name], commit<message>, status <file>
            cout<<"Command"<<endl;
        }else exit(1); //else, throw error
    } else {
        exit(2);
    }

    return 0;
}