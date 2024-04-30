#include <iostream>
#include "MyClass/MyClass.hpp"

int main(int, char**) {
    // Class declaration
    MyClass var("Class Name");

    // Print name from class attribute
    std::cout << var.name << std::endl;
    
    // Print name using class method
    var.tellName();
}
