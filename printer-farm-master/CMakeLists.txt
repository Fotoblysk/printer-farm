cmake_minimum_required(VERSION 3.10)
project(printer_farm_master)

set(CMAKE_CXX_STANDARD 14)

#####

####
## i have cmake 3.5


find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS common-libs/protobuf-templates/job.proto)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

find_package(PkgConfig)
## use pkg-config to get hints for 0mq locations
pkg_check_modules(PC_ZeroMQ QUIET zmq)

## use the hint from above to find where 'zmq.hpp' is located
find_path(ZeroMQ_INCLUDE_DIR
        NAMES zmq.hpp zhelpers.hpp
        PATHS ${PC_ZeroMQ_INCLUDE_DIRS}
        )

## use the hint from about to find the location of libzmq
find_library(ZeroMQ_LIBRARY
        NAMES zmq
        PATHS ${PC_ZeroMQ_LIBRARY_DIRS}
        )

set(SOURCE_FILES main.cpp src/zhelpers.hpp)
add_executable(printer_farm_master ${PROTO_HDRS} ${PROTO_SRCS} ${SOURCE_FILES})

## add the include directory to our compile directives
target_include_directories(printer_farm_master PUBLIC ${ZeroMQ_INCLUDE_DIR})
## at the 0mq library to our link directive

#####
target_link_libraries(printer_farm_master PRIVATE protobuf::libprotoc protobuf::libprotobuf)
target_link_libraries(printer_farm_master PUBLIC ${ZeroMQ_LIBRARY} ${Protobuf_LIBRARIES})


#add_executable(printer_farm_master main.cpp)