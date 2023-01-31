#include "Vehicule.hpp"

static const char * motorizations[] = 
{
    "Thermic",
    "Electric",
    "Atomic"
};

void Vehicule::start(void){
    std::cout << "Starting vehicule" << std::endl;
}

void Vehicule::stop(void){
    std::cout << "Stopping vehicule" << std::endl;
}

std::string Vehicule::to_string(void) const{
    return this->model + " (" + motorizations[this->motorization] + " engine) has " + std::to_string(this->nb_wheel) + " wheels and has a top speed of " + std::to_string(this->top_speed) + "km/h";
}