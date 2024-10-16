cmake_minimum_required(VERSION 3.29)
project(learning_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(poo)

add_executable(learning_cpp
    poo/main.cpp
    poo/persona.cpp
    poo/persona.h
        poo/Estudiante.cpp
        poo/Estudiante.h
        poo/Asignatura.cpp
        poo/Asignatura.h)
