cmake_minimum_required(VERSION 3.10)
project(code_organization VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(code_organization main.cpp)

# Add the local library "myclass"
add_library(myclass ./MyClass/MyClass.cpp ./MyClass/MyClass.hpp)

# Link the executable "myproject" to the "myclass"
target_link_libraries(code_organization PRIVATE myclass)

# specify where the executable should be installed
install(TARGETS code_organization DESTINATION bin)
