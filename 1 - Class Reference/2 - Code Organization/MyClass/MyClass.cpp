#include "MyClass.hpp"

// Constructor
MyClass::MyClass(const std::string _name){
    std::cout << "Hi, i'm the constructor" << std::endl;
    this->name = _name;
}

// Public method
void MyClass::tellName(void){
    std::cout << "Hi, i'm the method" << std::endl;
    std::cout << this->name << std::endl;
}