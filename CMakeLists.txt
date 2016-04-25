cmake_minimum_required(VERSION 3.5)
project(beastfuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp lib/http/Http.cpp lib/http/Http.h)
add_executable(beastfuzz ${SOURCE_FILES})