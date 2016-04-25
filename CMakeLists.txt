cmake_minimum_required(VERSION 3.5)
project(beastfuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#Initial Required Libs definition
set(requiredlibs)

#CURL
FIND_PACKAGE(CURL)
IF(CURL_FOUND)
    INCLUDE_DIRECTORIES(${CURL_INCLUDE_DIR})
    SET(requiredlibs ${requiredlibs} ${CURL_LIBRARIES})
ELSE(CURL_FOUND)
    MESSAGE(FATAL_ERROR "Could not find CURL")
ENDIF(CURL_FOUND)


set(SOURCE_FILES main.cpp lib/http/Http.cpp lib/http/Http.h)
add_executable(beastfuzz ${SOURCE_FILES})