# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master

# Include any dependencies generated for this target.
include CMakeFiles/printer_farm_master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printer_farm_master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printer_farm_master.dir/flags.make

job.pb.cc: common-libs/protobuf-templates/job.proto
job.pb.cc: /home/railgunpat/os_libs/vcpkg/installed/x64-linux/tools/protobuf/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on common-libs/protobuf-templates/job.proto"
	/home/railgunpat/os_libs/vcpkg/installed/x64-linux/tools/protobuf/protoc --cpp_out=/home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master -I /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/common-libs/protobuf-templates /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/common-libs/protobuf-templates/job.proto

job.pb.h: job.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate job.pb.h

CMakeFiles/printer_farm_master.dir/job.pb.cc.o: CMakeFiles/printer_farm_master.dir/flags.make
CMakeFiles/printer_farm_master.dir/job.pb.cc.o: job.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/printer_farm_master.dir/job.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/printer_farm_master.dir/job.pb.cc.o -c /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/job.pb.cc

CMakeFiles/printer_farm_master.dir/job.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printer_farm_master.dir/job.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/job.pb.cc > CMakeFiles/printer_farm_master.dir/job.pb.cc.i

CMakeFiles/printer_farm_master.dir/job.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printer_farm_master.dir/job.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/job.pb.cc -o CMakeFiles/printer_farm_master.dir/job.pb.cc.s

CMakeFiles/printer_farm_master.dir/job.pb.cc.o.requires:

.PHONY : CMakeFiles/printer_farm_master.dir/job.pb.cc.o.requires

CMakeFiles/printer_farm_master.dir/job.pb.cc.o.provides: CMakeFiles/printer_farm_master.dir/job.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/printer_farm_master.dir/build.make CMakeFiles/printer_farm_master.dir/job.pb.cc.o.provides.build
.PHONY : CMakeFiles/printer_farm_master.dir/job.pb.cc.o.provides

CMakeFiles/printer_farm_master.dir/job.pb.cc.o.provides.build: CMakeFiles/printer_farm_master.dir/job.pb.cc.o


CMakeFiles/printer_farm_master.dir/main.cpp.o: CMakeFiles/printer_farm_master.dir/flags.make
CMakeFiles/printer_farm_master.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/printer_farm_master.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/printer_farm_master.dir/main.cpp.o -c /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/main.cpp

CMakeFiles/printer_farm_master.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printer_farm_master.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/main.cpp > CMakeFiles/printer_farm_master.dir/main.cpp.i

CMakeFiles/printer_farm_master.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printer_farm_master.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/main.cpp -o CMakeFiles/printer_farm_master.dir/main.cpp.s

CMakeFiles/printer_farm_master.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/printer_farm_master.dir/main.cpp.o.requires

CMakeFiles/printer_farm_master.dir/main.cpp.o.provides: CMakeFiles/printer_farm_master.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/printer_farm_master.dir/build.make CMakeFiles/printer_farm_master.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/printer_farm_master.dir/main.cpp.o.provides

CMakeFiles/printer_farm_master.dir/main.cpp.o.provides.build: CMakeFiles/printer_farm_master.dir/main.cpp.o


# Object files for target printer_farm_master
printer_farm_master_OBJECTS = \
"CMakeFiles/printer_farm_master.dir/job.pb.cc.o" \
"CMakeFiles/printer_farm_master.dir/main.cpp.o"

# External object files for target printer_farm_master
printer_farm_master_EXTERNAL_OBJECTS =

printer_farm_master: CMakeFiles/printer_farm_master.dir/job.pb.cc.o
printer_farm_master: CMakeFiles/printer_farm_master.dir/main.cpp.o
printer_farm_master: CMakeFiles/printer_farm_master.dir/build.make
printer_farm_master: /home/railgunpat/os_libs/vcpkg/installed/x64-linux/lib/libprotoc.a
printer_farm_master: /home/railgunpat/os_libs/vcpkg/installed/x64-linux/lib/libprotobuf.a
printer_farm_master: /usr/lib/x86_64-linux-gnu/libzmq.so
printer_farm_master: /home/railgunpat/os_libs/vcpkg/installed/x64-linux/lib/libprotobuf.a
printer_farm_master: CMakeFiles/printer_farm_master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable printer_farm_master"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printer_farm_master.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printer_farm_master.dir/build: printer_farm_master

.PHONY : CMakeFiles/printer_farm_master.dir/build

CMakeFiles/printer_farm_master.dir/requires: CMakeFiles/printer_farm_master.dir/job.pb.cc.o.requires
CMakeFiles/printer_farm_master.dir/requires: CMakeFiles/printer_farm_master.dir/main.cpp.o.requires

.PHONY : CMakeFiles/printer_farm_master.dir/requires

CMakeFiles/printer_farm_master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printer_farm_master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printer_farm_master.dir/clean

CMakeFiles/printer_farm_master.dir/depend: job.pb.cc
CMakeFiles/printer_farm_master.dir/depend: job.pb.h
	cd /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master /home/railgunpat/uczelnia/kolo/rekrutacja/printer-farm/printer-farm-master/CMakeFiles/printer_farm_master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printer_farm_master.dir/depend

