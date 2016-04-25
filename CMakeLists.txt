cmake_minimum_required(VERSION 3.5)
project(beastfuzz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#Initial Required Libs definition
set(requiredlibs)
#Initial Required Source files
set(SOURCE_FILES main.cpp)

#CURL - sudo apt-get install libcurl4-openssl-dev libcurl3-dbg
FIND_PACKAGE(CURL)
IF(CURL_FOUND)
    INCLUDE_DIRECTORIES(${CURL_INCLUDE_DIR})
    SET(requiredlibs ${requiredlibs} ${CURL_LIBRARIES})
ELSE(CURL_FOUND)
    MESSAGE(FATAL_ERROR "Could not find CURL")
ENDIF(CURL_FOUND)

#HttpRequest Source Files
SET(SOURCE_FILES ${SOURCE_FILES} lib/http/HttpRequest.cpp lib/http/HttpRequest.h lib/http/HttpUrl.cpp lib/http/HttpUrl.h)

add_executable(beastfuzz ${SOURCE_FILES})