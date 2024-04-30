#include "Vehicule.hpp"

static const char* motorizations[] =
{
    "Thermic",
    "Electric",
    "Atomic",
};

Vehicule::Vehicule(
    const std::string _model,
    Motorization_Enum _motorization,
    unsigned int _nb_wheel,
    unsigned int _top_speed) : model(_model), motorization(_motorization),
    nb_wheel(_nb_wheel), top_speed(_top_speed) {
    std::cout << "Vehicule constructor start" << std::endl;
    this->start();
    std::cout << "Vehicule constructor stop" << std::endl;
}

Vehicule::~Vehicule() {
    std::cout << "Vehicule destructor start" << std::endl;
    this->stop();
    std::cout << "Vehicule destructor stop" << std::endl;
}

void Vehicule::start(void) {
    std::cout << "Starting vehicule " << this << std::endl;
}

void Vehicule::stop(void) {
    std::cout << "Stopping vehicule " << this << std::endl;
}

std::string Vehicule::to_string(void) const {
    return this->model + " (" + motorizations[this->motorization] + " engine) has " + std::to_string(this->nb_wheel) + " wheels and has a top speed of " + std::to_string(this->top_speed) + "km/h";
}