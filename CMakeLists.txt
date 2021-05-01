cmake_minimum_required(VERSION 3.19)
project(LR3_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LR3_2
        Figure.cpp
        Figure.h
        Square.cpp
        Square.h
        Triangle.cpp
        Triangle.h
         main.cpp)
