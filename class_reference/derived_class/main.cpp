#include "Vehicule/Car/Car.hpp"

int main(void){
    // Create car object derived from vehicule parent class
    Car ford_mustang("Ford Mustang", 235);

    // Call start method inherited from vehicule parent class
    ford_mustang.start();

    // Call wipers_on from derived class car
    ford_mustang.wipers_on();

    // Print whatever the class has to tell us
    std::cout << ford_mustang.to_string() << std::endl;

    /*
        Create a vehicule variable, by using this variable
        it will be impossible to call car methods.
    */
    Vehicule vehicule = ford_mustang;

    // Print whatever the class has to tell us
    std::cout << vehicule.to_string() << std::endl;

    return 0;
}