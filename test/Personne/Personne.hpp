#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>

#define MAX_AGE 200

/**
 * @brief Describes a person
*/
class Personne{
public:
    Personne(std::string _name);
    Personne(std::string _name, unsigned int _age);

    ~Personne();

    void tell_name(void);
    void set_name(std::string _name);
    void set_age(unsigned int _age);

protected:
    void breathe(void);

private:
    std::string name;
    unsigned int age = 0;
};

#endif /* PERSONNE_HPP */