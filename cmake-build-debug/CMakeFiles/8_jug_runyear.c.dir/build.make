# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aochenwen/Desktop/计算机基础笔记/WD_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/8_jug_runyear.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/8_jug_runyear.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8_jug_runyear.c.dir/flags.make

CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o: CMakeFiles/8_jug_runyear.c.dir/flags.make
CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o: ../8_jug_runyear.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o -c /Users/aochenwen/Desktop/计算机基础笔记/WD_C/8_jug_runyear.c

CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aochenwen/Desktop/计算机基础笔记/WD_C/8_jug_runyear.c > CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.i

CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aochenwen/Desktop/计算机基础笔记/WD_C/8_jug_runyear.c -o CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.s

# Object files for target 8_jug_runyear.c
8_jug_runyear_c_OBJECTS = \
"CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o"

# External object files for target 8_jug_runyear.c
8_jug_runyear_c_EXTERNAL_OBJECTS =

../output/8_jug_runyear.c: CMakeFiles/8_jug_runyear.c.dir/8_jug_runyear.c.o
../output/8_jug_runyear.c: CMakeFiles/8_jug_runyear.c.dir/build.make
../output/8_jug_runyear.c: CMakeFiles/8_jug_runyear.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../output/8_jug_runyear.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8_jug_runyear.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8_jug_runyear.c.dir/build: ../output/8_jug_runyear.c
.PHONY : CMakeFiles/8_jug_runyear.c.dir/build

CMakeFiles/8_jug_runyear.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8_jug_runyear.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8_jug_runyear.c.dir/clean

CMakeFiles/8_jug_runyear.c.dir/depend:
	cd /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aochenwen/Desktop/计算机基础笔记/WD_C /Users/aochenwen/Desktop/计算机基础笔记/WD_C /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug /Users/aochenwen/Desktop/计算机基础笔记/WD_C/cmake-build-debug/CMakeFiles/8_jug_runyear.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/8_jug_runyear.c.dir/depend

