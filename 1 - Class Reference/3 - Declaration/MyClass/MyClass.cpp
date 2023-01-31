#include "MyClass.hpp"

// Constructor
MyClass::MyClass(const std::string _name){
    this->name = _name;
}

// Public method
void MyClass::tellName(void){
    std::cout << this->name << std::endl;
}