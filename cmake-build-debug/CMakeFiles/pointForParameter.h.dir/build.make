# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\luo\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\luo\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\luo\CLionProjects\hello_cplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointForParameter.h.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/pointForParameter.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointForParameter.h.dir/flags.make

CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.obj: CMakeFiles/pointForParameter.h.dir/flags.make
CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.obj: ../pointForParameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointForParameter.h.dir\pointForParameter.cpp.obj -c C:\Users\luo\CLionProjects\hello_cplus\pointForParameter.cpp

CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\luo\CLionProjects\hello_cplus\pointForParameter.cpp > CMakeFiles\pointForParameter.h.dir\pointForParameter.cpp.i

CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\luo\CLionProjects\hello_cplus\pointForParameter.cpp -o CMakeFiles\pointForParameter.h.dir\pointForParameter.cpp.s

CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.obj: CMakeFiles/pointForParameter.h.dir/flags.make
CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.obj: ../constPointForParameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.obj"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointForParameter.h.dir\constPointForParameter.cpp.obj -c C:\Users\luo\CLionProjects\hello_cplus\constPointForParameter.cpp

CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.i"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\luo\CLionProjects\hello_cplus\constPointForParameter.cpp > CMakeFiles\pointForParameter.h.dir\constPointForParameter.cpp.i

CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.s"
	D:\software\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\luo\CLionProjects\hello_cplus\constPointForParameter.cpp -o CMakeFiles\pointForParameter.h.dir\constPointForParameter.cpp.s

# Object files for target pointForParameter.h
pointForParameter_h_OBJECTS = \
"CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.obj" \
"CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.obj"

# External object files for target pointForParameter.h
pointForParameter_h_EXTERNAL_OBJECTS =

pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/pointForParameter.cpp.obj
pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/constPointForParameter.cpp.obj
pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/build.make
pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/linklibs.rsp
pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/objects1.rsp
pointForParameter.h.exe: CMakeFiles/pointForParameter.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable pointForParameter.h.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointForParameter.h.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointForParameter.h.dir/build: pointForParameter.h.exe
.PHONY : CMakeFiles/pointForParameter.h.dir/build

CMakeFiles/pointForParameter.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointForParameter.h.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointForParameter.h.dir/clean

CMakeFiles/pointForParameter.h.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\luo\CLionProjects\hello_cplus C:\Users\luo\CLionProjects\hello_cplus C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug C:\Users\luo\CLionProjects\hello_cplus\cmake-build-debug\CMakeFiles\pointForParameter.h.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointForParameter.h.dir/depend

