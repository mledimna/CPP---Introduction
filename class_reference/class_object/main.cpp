#include <iostream>

// Class declaration
class MyClass{
public:
    // Public attribute
    std::string name = "default";

    // Default constructor
    MyClass(){
        std::cout << "Hi, i'm the constructor of " << this << std::endl;
    }

    // Constructor taking name as an argument
    // Using 'name(_name)' ensure a proper affectation of name attribute to _name parameter value
    MyClass(const std::string _name): name(_name){
        std::cout << "Hi, i'm the constructor of " << this << std::endl;
    }

    // Destructor
    ~MyClass(){
        std::cout << "I'm the destructor of " << this << ", bye !" << std::endl;
    }

    // Public method
    void tellName(void){
        std::cout << "My name is " << this->name << ", my address is " << this << std::endl;
    }
};

int main(int, char**) {
    // Class declaration using default constructor
    MyClass var1;

    // Class declaration using other constructor
    MyClass var2("Class Name");
    
    // Print name using class method
    var1.tellName();
    var2.tellName();
}

/*
Output
Hi, i'm the constructor of 0x772bff7d0
Hi, i'm the constructor of 0x772bff7b0
My name is default, my address is 0x772bff7d0
My name is Class Name, my address is 0x772bff7b0
I'm the destructor of 0x772bff7b0, bye !
I'm the destructor of 0x772bff7d0, bye !
*/