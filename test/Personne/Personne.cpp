#include "Personne.hpp"
#include <iostream>

/**
 * @brief Constructs a person including its name
 * @param _name (std::string) Person name
*/
Personne::Personne(std::string _name){
    this->set_name(_name);
    std::cout << this->name + " is born" << std::endl;
}

/**
 * @brief Constructs a person including its name
 * @param _name (std::string) Person name
 * @param _age (unsigned int) Person age
*/
Personne::Personne(std::string _name, unsigned int _age){
    this->set_name(_name);
    this->set_age(_age);
    std::cout << this->name + " is born" << std::endl;
}

/**
 * @brief Destructs a person
*/
Personne::~Personne(){
    std::cout << this->name + " is dead" << std::endl;
}

/**
 * @brief tells name on terminal output
*/
void Personne::tell_name(void){
    std::cout << this->name << std::endl;
}

/**
 * @brief set name member with empty check
 * @param _name (std::string) Name
*/
void Personne::set_name(std::string _name){
    if (_name.length() <= 0) this->name = "DEFAULT_NAME";
    else this->name = _name;
}

/**
 * @brief set age member with false age check
 * @param _age (unsigned int) Age
*/
void Personne::set_age(unsigned int _age){
    if (_age <= MAX_AGE) this->age = _age;
}

void Personne::breathe(void){
    std::cout << this->name + " is breathing" << std::endl;
}