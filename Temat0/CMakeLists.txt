cmake_minimum_required(VERSION 3.15)
project(Temat0)
set(CMAKE_CXX_STANDARD 14)


FILE(GLOB ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
add_executable(Temat0 main.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${MyProject_SOURCE_DIR})