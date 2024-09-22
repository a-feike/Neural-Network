# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name and the programming language
project(NeuralNetwork LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add the executable, sources in src folder
add_executable(NeuralNetwork main.cpp src/Neuron.cpp src/Layer.cpp src/InputLayer.cpp 
                src/HiddenLayer.cpp src/OutputLayer.cpp src/NeuralNet.cpp src/RandomUtils.cpp)
