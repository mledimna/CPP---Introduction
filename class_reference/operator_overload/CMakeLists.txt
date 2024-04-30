cmake_minimum_required(VERSION 3.10)
project(operator_overload VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(operator_overload main.cpp)
