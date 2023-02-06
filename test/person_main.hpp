#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include "Personne/Personne.hpp"

// Héritage
class DarthVader : public Personne{
public:
    DarthVader(std::string _lightsaber_color):Personne("Anakin Skywalker", 87){
        this->lightsaber_color = _lightsaber_color;
        std::cout << "hhggehegehhhg" << std::endl;
        this->breathe();
    }

    ~DarthVader(){
        std::cout << "hhggehegehhhg....." << std::endl;
    }

private:
    std::string lightsaber_color = "Red";
};

#endif /* MAIN_HPP */