cmake_minimum_required(VERSION 3.17)
project(ProjectMain)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProjectMain main.cpp Transform.cpp Transform.h Search.h Search.cpp DataReader.cpp DataReader.h Index.h Cache.h)