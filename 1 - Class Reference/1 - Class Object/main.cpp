#include <iostream>

// Class declaration
class MyClass{
public:
    // Public attribute
    std::string name;

    // Constructor
    MyClass(const std::string _name){
        std::cout << "Hi, i'm the constructor" << std::endl;
        this->name = _name;
    }

    // Public method
    void tellName(void){
        std::cout << "Hi, i'm the method" << std::endl;
        std::cout << this->name << std::endl;
    }
};

int main(int, char**) {
    // Class declaration
    MyClass var("Class Name");

    // Print name from class attribute
    std::cout << var.name << std::endl;
    
    // Print name using class method
    var.tellName();
}

/*
Output
Hi, i'm the constructor
Class Name        
Hi, i'm the method
Class Name
*/