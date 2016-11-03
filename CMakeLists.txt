cmake_minimum_required(VERSION 2.8.9)
project(Solucion)

include_directories(include)

set(SOURCES src/Solucion.cpp src/Dinamica.cpp src/Archivos.cpp src/main.cpp)

add_executable(Solucion ${SOURCES})
