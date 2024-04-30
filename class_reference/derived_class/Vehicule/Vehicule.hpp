#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <iostream>

typedef enum{
THERMIC = 0,
ELECTRIC = 1,
ATOMIC = 2
}Motorization_Enum;

class Vehicule{
public:
    Vehicule(
            const std::string _model,
            Motorization_Enum _motorization,
            unsigned int _nb_wheel,
            unsigned int _top_speed) {
        this->model = _model;
        this->motorization = _motorization;
        this->nb_wheel = _nb_wheel;
        this->top_speed = _top_speed;
    }

    void start(void);
    void stop(void);
    std::string to_string(void) const;

private:
    std::string model;
    Motorization_Enum motorization = THERMIC;
    unsigned int nb_wheel = 0;
    unsigned int top_speed = 0;
};

#endif /* VEHICULE_HPP */