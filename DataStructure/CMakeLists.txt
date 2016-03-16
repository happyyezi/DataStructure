cmake_minimum_required(VERSION 3.3)
project(DataStructure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BinaryTree.h)
add_executable(DataStructure ${SOURCE_FILES})