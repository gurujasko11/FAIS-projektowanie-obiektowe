cmake_minimum_required(VERSION 3.15)
project(observator)

set(CMAKE_CXX_STANDARD 14)

add_executable(observator
        Auction.cpp
        Auction.h
        ObservedSubject.cpp
        ObservedSubject.h
        Observer.cpp
        Observer.h
        User.cpp
        User.h
        main.cpp)