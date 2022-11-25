cmake_minimum_required(VERSION 3.23)
project(GOTproject)

set(CMAKE_CXX_STANDARD 14)

add_executable(GOTproject main.cpp commands.cpp commands.h dbControl.cpp dbControl.h client.cpp ServerSocket.cpp ServerSocket.h ClientSocket.cpp ClientSocket.h)
