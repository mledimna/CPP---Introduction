#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <iostream>

typedef enum {
    THERMIC,
    ELECTRIC,
    HYBRID,
    ATOMIC,
}Motorization_Enum;

class Vehicule {
public:
    Vehicule(
        const std::string _model,
        Motorization_Enum _motorization,
        unsigned int _nb_wheel,
        unsigned int _top_speed
    );

    ~Vehicule();

    void start(void);
    void stop(void);
    std::string to_string(void) const;

private:
    std::string model;
    Motorization_Enum motorization;
    unsigned int nb_wheel;
    unsigned int top_speed;
};

#endif /* VEHICULE_HPP */