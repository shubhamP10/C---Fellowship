# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/shubham/Desktop/Fellowship/CMakeExample_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shubham/Desktop/Fellowship/CMakeExample_CPP

# Include any dependencies generated for this target.
include addition/CMakeFiles/addition.dir/depend.make

# Include the progress variables for this target.
include addition/CMakeFiles/addition.dir/progress.make

# Include the compile flags for this target's objects.
include addition/CMakeFiles/addition.dir/flags.make

addition/CMakeFiles/addition.dir/addition.cpp.o: addition/CMakeFiles/addition.dir/flags.make
addition/CMakeFiles/addition.dir/addition.cpp.o: addition/addition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object addition/CMakeFiles/addition.dir/addition.cpp.o"
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/addition.dir/addition.cpp.o -c /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition/addition.cpp

addition/CMakeFiles/addition.dir/addition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addition.dir/addition.cpp.i"
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition/addition.cpp > CMakeFiles/addition.dir/addition.cpp.i

addition/CMakeFiles/addition.dir/addition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addition.dir/addition.cpp.s"
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition/addition.cpp -o CMakeFiles/addition.dir/addition.cpp.s

# Object files for target addition
addition_OBJECTS = \
"CMakeFiles/addition.dir/addition.cpp.o"

# External object files for target addition
addition_EXTERNAL_OBJECTS =

addition/libaddition.a: addition/CMakeFiles/addition.dir/addition.cpp.o
addition/libaddition.a: addition/CMakeFiles/addition.dir/build.make
addition/libaddition.a: addition/CMakeFiles/addition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shubham/Desktop/Fellowship/CMakeExample_CPP/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libaddition.a"
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && $(CMAKE_COMMAND) -P CMakeFiles/addition.dir/cmake_clean_target.cmake
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
addition/CMakeFiles/addition.dir/build: addition/libaddition.a

.PHONY : addition/CMakeFiles/addition.dir/build

addition/CMakeFiles/addition.dir/clean:
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition && $(CMAKE_COMMAND) -P CMakeFiles/addition.dir/cmake_clean.cmake
.PHONY : addition/CMakeFiles/addition.dir/clean

addition/CMakeFiles/addition.dir/depend:
	cd /home/shubham/Desktop/Fellowship/CMakeExample_CPP && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shubham/Desktop/Fellowship/CMakeExample_CPP /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition /home/shubham/Desktop/Fellowship/CMakeExample_CPP /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition /home/shubham/Desktop/Fellowship/CMakeExample_CPP/addition/CMakeFiles/addition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addition/CMakeFiles/addition.dir/depend

