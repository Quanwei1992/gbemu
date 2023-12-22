cmake_minimum_required(VERSION 3.10)

project(gbemu)

include(cmake/ucm.cmake)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(core)
add_subdirectory(gbemu)