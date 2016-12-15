#set(CMAKE_VERBOSE_MAKEFILE 1)
cmake_minimum_required(VERSION 3.0)

project(cpp-test CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(cpp-test
    src/main.cpp
)
include_directories(
    src
)
target_compile_options(cpp-test PRIVATE
    -std=c++11
    -Wall
    -Wextra
)
