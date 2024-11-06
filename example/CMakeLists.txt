find_package(Protobuf CONFIG REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
link_directories(${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

SET(PROVIDER provider.cpp hello.pb.cc)
SET(CALLER caller.cpp hello.pb.cc)

add_executable(provider ${PROVIDER})
target_link_libraries(provider PRIVATE protobuf::libprotobuf rpc)

add_executable(caller ${CALLER})
target_link_libraries(caller PRIVATE protobuf::libprotobuf rpc)