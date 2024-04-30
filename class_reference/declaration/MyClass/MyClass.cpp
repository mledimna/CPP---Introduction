#include "MyClass.hpp"

// Constructor
MyClass::MyClass(const std::string _name): name(_name){
    std::cout << "Hi, i'm the constructor of " << this << std::endl;
}

// Destructor
MyClass::~MyClass(){
    std::cout << "I'm the destructor of " << this << ", bye !" << std::endl;
}

// Public method
void MyClass::tellName(void){
    std::cout << this->name << std::endl;
}