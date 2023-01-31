#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "../Vehicule.hpp"

class Car: public Vehicule{
public:
    Car(const std::string _model, unsigned int _top_speed):
    Vehicule(_model, THERMIC, 4, _top_speed){}
    
    void wipers_on(void);
    void wipers_off(void);
};

#endif /* CAR_HPP */