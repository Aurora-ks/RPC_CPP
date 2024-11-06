find_package(Protobuf CONFIG REQUIRED)
find_package(asio CONFIG REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${asio_INCLUDE_DIRS})

aux_source_directory(. SRC_LIST)
add_library(rpc STATIC ${SRC_LIST})
target_link_libraries(rpc PRIVATE protobuf::libprotobuf asio::asio)