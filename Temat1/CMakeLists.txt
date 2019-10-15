cmake_minimum_required(VERSION 3.15)
project(Temat1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Temat1
        Book.cpp
        Book.h
        IDao.cpp
        IDao.h
        IStorageObject.cpp
        IStorageObject.h
        main.cpp
        Person.cpp
        Person.h
        PersonDao.cpp
        PersonDao.h
        BookDao.cpp
        BookDao.h)
