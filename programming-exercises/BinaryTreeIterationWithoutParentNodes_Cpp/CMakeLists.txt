cmake_minimum_required(VERSION 3.9)
#include_directories(${CMAKEDEMO_SOURCE_DIR})
#link_directories(${CMAKEDEMO_BINARY_DIR})

#SET (CMAKE_CXX_FLAGS "-Wfatal-errors")

#the one C file

add_subdirectory("./src")
add_subdirectory("./test")

