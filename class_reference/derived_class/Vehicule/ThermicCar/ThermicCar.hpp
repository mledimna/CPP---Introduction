#ifndef THERMICCAR_HPP
#define THERMICCAR_HPP

#include <iostream>
#include "../Vehicule.hpp"

class ThermicCar : public Vehicule {
public:
    ThermicCar(const std::string _model, unsigned int _top_speed) :
        Vehicule(_model, THERMIC, 4, _top_speed) {
    }

    void wipers_on(void);
    void wipers_off(void);
};

#endif /* THERMICCAR_HPP */