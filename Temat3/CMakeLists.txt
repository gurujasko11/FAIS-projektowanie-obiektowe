cmake_minimum_required(VERSION 3.15)
project(Temat3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Temat3
        CsvDeserializer.cpp
        CsvDeserializer.h
        CsvSerializer.cpp
        CsvSerializer.h
        CsvSerializerFactory.cpp
        CsvSerializerFactory.h
        Deserializer.cpp
        Deserializer.h
        Invoice.h
        JsonDeserializer.cpp
        JsonDeserializer.h
        JsonSerializer.cpp
        JsonSerializer.h
        JsonSerializerFactory.cpp
        JsonSerializerFactory.h
        Serializer.cpp
        Serializer.h
        SerializerFactory.cpp
        SerializerFactory.h
        XmlDeserializer.cpp
        XmlDeserializer.h
        XmlSerializer.cpp
        XmlSerializer.h
        XmlSerializerFactory.cpp
        XmlSerializerFactory.h
        main.cpp)