#include <iostream>
#include <string>
#include "MyClass/MyClass.hpp"

int main(void){
    // Declare class with string parameter
    MyClass var("ClassName");
    MyClass * ptr = new MyClass("Other ClassName");

    // Print parameter
    var.tellName();

    // Also print parameter
    ptr->tellName();

    // Don't forget to delete new class !
    delete ptr;

    // Set to NULL to keep in mind that we deleted it
    ptr = NULL;

    return 0;
}


/*
Output
ClassName
Other ClassName
*/