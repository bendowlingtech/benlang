cmake_minimum_required(VERSION 3.28)
project(benlang)

set(CMAKE_CXX_STANDARD 26)

add_executable(benlang main.cpp
        lexer.cpp
        lexer.h
)
