cmake_minimum_required(VERSION 3.10)
project(printer_farm_slave)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS common/protobuf-templates/pf_msg.proto)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "-std=c++17 -lstdc++fs" )
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

set(SOURCE_FILES main.cpp common/utils/libs/zhelpers.hpp common/utils/types/commonsymbols.h common/utils/types/PrinterData.h src/PrintStrategy.h src/FakePrintStrategy.cpp src/FakePrintStrategy.h src/Printer.cpp src/Printer.h src/PrinterFarmSlave.cpp src/PrinterFarmSlave.h common/utils/libs/myzmqext.h common/utils/libs/myzmqext.cpp common/utils/libs/mypbutils.h common/utils/types/Job.h)
add_executable(printer_farm_slave ${PROTO_HDRS} ${PROTO_SRCS} ${SOURCE_FILES})

## add the include directory to our compile directives
target_include_directories(printer_farm_slave PUBLIC ./ ${ZeroMQ_INCLUDE_DIR})
## at the 0mq library to our link directive

#####
target_link_libraries(printer_farm_slave PRIVATE protobuf::libprotoc protobuf::libprotobuf)
## may not work for clang
target_link_libraries(printer_farm_slave PUBLIC ${ZeroMQ_LIBRARY} ${Protobuf_LIBRARIES} stdc++fs)
