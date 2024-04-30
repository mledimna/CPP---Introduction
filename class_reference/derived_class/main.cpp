#include "Vehicule/ThermicCar/ThermicCar.hpp"

int main(void) {
    // Create car object derived from vehicule parent class
    ThermicCar ford_mustang("Ford Mustang", 235);

    // Print whatever the class has to tell us
    std::cout << ford_mustang.to_string() << std::endl;

    // Call wipers_on from derived class car
    ford_mustang.wipers_on();

    // Create a Vehicule reference based on ford mustang
    // By doing so we can control the Vehicule part of ford_mustang
    // Note : We can't control the ThermicCar part of ford_mustang
    Vehicule& vehicule = ford_mustang;

    std::cout << "Starting vehicule by reference : ";
    vehicule.start();
    // vehicule.wipers_on() <-- IMPOSSIBLE

    return 0;
}