cmake_minimum_required(VERSION 3.14)
project(playground)

set(CMAKE_CXX_STANDARD 14)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_library(MYLIB SHARED myLib/Math.cpp)

add_executable(playground main.cpp)

target_link_libraries(playground MYLIB)