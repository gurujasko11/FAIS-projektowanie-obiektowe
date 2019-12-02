cmake_minimum_required(VERSION 3.15)
project(Temat5)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        Temat5
        ElectronicDevice.cpp
        ElectronicDevice.h
        ElectronicDeviceFactory.cpp
        ElectronicDeviceFactory.h
        Module.cpp
        Module.h
        Robot.cpp
        Robot.h
        main.cpp)