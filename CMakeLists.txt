cmake_minimum_required(VERSION 3.26)
project(sqlite)

set(CMAKE_CXX_STANDARD 17)

add_executable(sqlite main.cpp
        input_buffer.h
        input_header.cpp
        command.h
        command.cpp
        statement.cpp
        statement.h
)
