cmake_minimum_required(VERSION 3.10)
project(myproject VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(myproject main.cpp)

# Add the local library "Personne"
add_library(personne ./Personne/Personne.cpp ./Personne/Personne.hpp)

# Link the executable "myproject" to "personne"
target_link_libraries(myproject PRIVATE personne)
