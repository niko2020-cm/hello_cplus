cmake_minimum_required(VERSION 3.20)
project(hello_cplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_cplus main.cpp Point.cpp Point.h client.cpp client.h Matrix.cpp Matrix.h pointForParameter.h pointForParameter.cpp constPointForParameter.cpp constPointForParameter.h pointerTypeFunction.cpp pointerTypeFunction.h pointerToFunction.cpp pointerToFunction.h objectPoint.cpp objectPoint.h)


