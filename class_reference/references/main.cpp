#include <iostream>

int main() {
    int original = 10;

    // Declaring a reference
    int& ref = original; // '&' denotes a reference

    // Accessing the original variable through the reference
    std::cout << "Original value: " << original << std::endl;
    std::cout << "Reference value: " << ref << std::endl;

    // Modifying the original variable through the reference
    ref = 20;
    std::cout << "Modified original value: " << original << std::endl;
    std::cout << "Modified reference value: " << ref << std::endl;

    return 0;
}

/*
Output :
Original value: 10
Reference value: 10
Modified original value: 20
Modified reference value: 20
*/