cmake_minimum_required(VERSION 3.16)
project(3_new_pract)

set(CMAKE_CXX_STANDARD 17)

add_executable(3_new_pract main.cpp)

COPY(FILE "input.txt" DESTINATION "/")