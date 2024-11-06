cmake_minimum_required(VERSION 3.28)
project(RPC)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/example)

add_subdirectory(src)
add_subdirectory(example)