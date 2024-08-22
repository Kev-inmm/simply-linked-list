cmake_minimum_required(VERSION 3.28)
project(single_linked_list)

set(CMAKE_CXX_STANDARD 23)

add_executable(single_linked_list main.cpp
        LinkedList.cpp
        LinkedList.h)
