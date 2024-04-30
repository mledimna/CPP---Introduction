cmake_minimum_required(VERSION 3.10)
project(vector_reference VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(vector_reference main.cpp)

# specify where the executable should be installed
install(TARGETS vector_reference DESTINATION bin)
