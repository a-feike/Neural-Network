# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/alex/sciebo/Computer Science/C++/NeuralNetwork"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build"

# Include any dependencies generated for this target.
include CMakeFiles/NeuralNetwork.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NeuralNetwork.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NeuralNetwork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NeuralNetwork.dir/flags.make

CMakeFiles/NeuralNetwork.dir/main.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/main.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/main.cpp
CMakeFiles/NeuralNetwork.dir/main.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NeuralNetwork.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/main.cpp.o -MF CMakeFiles/NeuralNetwork.dir/main.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/main.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/main.cpp"

CMakeFiles/NeuralNetwork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/main.cpp" > CMakeFiles/NeuralNetwork.dir/main.cpp.i

CMakeFiles/NeuralNetwork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/main.cpp" -o CMakeFiles/NeuralNetwork.dir/main.cpp.s

CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/Neuron.cpp
CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Neuron.cpp"

CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Neuron.cpp" > CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.i

CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Neuron.cpp" -o CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.s

CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/Layer.cpp
CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Layer.cpp"

CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Layer.cpp" > CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.i

CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/Layer.cpp" -o CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.s

CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/InputLayer.cpp
CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/InputLayer.cpp"

CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/InputLayer.cpp" > CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.i

CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/InputLayer.cpp" -o CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.s

CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/HiddenLayer.cpp
CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/HiddenLayer.cpp"

CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/HiddenLayer.cpp" > CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.i

CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/HiddenLayer.cpp" -o CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.s

CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/OutputLayer.cpp
CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/OutputLayer.cpp"

CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/OutputLayer.cpp" > CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.i

CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/OutputLayer.cpp" -o CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.s

CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/NeuralNet.cpp
CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/NeuralNet.cpp"

CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/NeuralNet.cpp" > CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.i

CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/NeuralNet.cpp" -o CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.s

CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o: /home/alex/sciebo/Computer\ Science/C++/NeuralNetwork/src/RandomUtils.cpp
CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o: CMakeFiles/NeuralNetwork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o -MF CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o.d -o CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o -c "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/RandomUtils.cpp"

CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/RandomUtils.cpp" > CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.i

CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/src/RandomUtils.cpp" -o CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.s

# Object files for target NeuralNetwork
NeuralNetwork_OBJECTS = \
"CMakeFiles/NeuralNetwork.dir/main.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o" \
"CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o"

# External object files for target NeuralNetwork
NeuralNetwork_EXTERNAL_OBJECTS =

NeuralNetwork: CMakeFiles/NeuralNetwork.dir/main.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/Neuron.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/Layer.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/InputLayer.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/HiddenLayer.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/OutputLayer.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/NeuralNet.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/src/RandomUtils.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/build.make
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable NeuralNetwork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NeuralNetwork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NeuralNetwork.dir/build: NeuralNetwork
.PHONY : CMakeFiles/NeuralNetwork.dir/build

CMakeFiles/NeuralNetwork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NeuralNetwork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NeuralNetwork.dir/clean

CMakeFiles/NeuralNetwork.dir/depend:
	cd "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/alex/sciebo/Computer Science/C++/NeuralNetwork" "/home/alex/sciebo/Computer Science/C++/NeuralNetwork" "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build" "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build" "/home/alex/sciebo/Computer Science/C++/NeuralNetwork/build/CMakeFiles/NeuralNetwork.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/NeuralNetwork.dir/depend

