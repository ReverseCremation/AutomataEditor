cmake_minimum_required(VERSION 3.14)
project(cellular_automata)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cellular_automata
        automata.cpp
        automata.h
        main.cpp
        world.cpp
        world.h)
