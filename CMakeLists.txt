cmake_minimum_required(VERSION 3.13)
project(reggie)

set(CMAKE_CXX_STANDARD 17)

add_library(reggie SHARED reggie.cpp reggie.h)
