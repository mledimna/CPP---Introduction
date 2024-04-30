cmake_minimum_required(VERSION 3.10)
project(access VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(access main.cpp)

# specify where the executable should be installed
install(TARGETS access DESTINATION bin)
