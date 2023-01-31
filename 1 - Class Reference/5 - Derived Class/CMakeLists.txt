cmake_minimum_required(VERSION 3.10)
project(myproject VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(myproject main.cpp)

file(GLOB MYLIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Vehicule/*.cpp")
file(GLOB MYLIB_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Vehicule/*.hpp")
add_library(vehicule ${MYLIB_SOURCES} ${MYLIB_HEADERS})

file(GLOB MYLIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Vehicule/Car/*.cpp")
file(GLOB MYLIB_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Vehicule/Car/*.hpp")
add_library(car ${MYLIB_SOURCES} ${MYLIB_HEADERS})

target_link_libraries(myproject PUBLIC vehicule)
target_link_libraries(myproject PUBLIC car)

# specify where the executable should be installed
install(TARGETS myproject DESTINATION bin)
