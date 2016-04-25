cmake_minimum_required(VERSION 3.5)
project(beastfuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp lib/mutilator/Mutilator.cpp lib/mutilator/Mutilator.h lib/mutilator/StringMutilator.cpp lib/mutilator/StringMutilator.h lib/mutilator/StringMutilator.cpp lib/mutilator/StringMutilator.h lib/mutilator/MutilatorFactory.cpp lib/mutilator/MutilatorFactory.h)
add_executable(beastfuzz ${SOURCE_FILES})