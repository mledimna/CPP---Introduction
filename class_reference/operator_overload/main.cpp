#include <vector>
#include <iostream>
#include <cmath>

class Vecteur{
public:
    Vecteur(float _x, float _y):x(_x), y(_y){ }
    
    Vecteur operator + (const Vecteur & _vect);
    bool operator > (const Vecteur & _vect);
    Vecteur operator - (const Vecteur & _vect);
    
    std::string to_string(void);

private:
    float x;
    float y;
};


Vecteur Vecteur::operator + (const Vecteur & _vect){
    Vecteur ret(0.0, 0.0);

    ret.x = this->x + _vect.x;
    ret.y = this->y + _vect.y;

    return ret;
}

bool Vecteur::operator > (const Vecteur & _vect){        
    bool ret = false;

    float n1 = std::sqrt(std::pow(this->x,2) + std::pow(this->y,2));
    float n2 = std::sqrt(std::pow(_vect.x,2) + std::pow(_vect.y,2));

    if (n1 > n2) ret = true;
    
    return ret;
}

Vecteur Vecteur::operator - (const Vecteur & _vect){
    Vecteur ret(0.0, 0.0);

    ret.x = this->x - _vect.x;
    ret.y = this->y - _vect.y;

    return ret;
}

std::string Vecteur::to_string(void){
    std::string str = "";

    str += "(" + std::to_string(this->x) + "; " + std::to_string(this->y) + ")";

    return str;
}

int main(void){
    Vecteur vect1(2, 8);
    Vecteur vect2(2, 4);

    Vecteur vect3 = vect1 + vect2;
    Vecteur vect4 = vect1 - vect2;

    std::cout << vect1.to_string() << std::endl;
    std::cout << vect2.to_string() << std::endl;
    std::cout << vect3.to_string() << std::endl;
    std::cout << vect4.to_string() << std::endl;

    if (vect1 > vect2) std::cout << "v1 is greater than v2" << std::endl;
    else std::cout << "v1 is lower or equal than v2" << std::endl;

    return 0;
}

/*
Output :

(2.000000; 8.000000)
(2.000000; 4.000000)
(4.000000; 12.000000)
(0.000000; 4.000000)
v1 is greater than v2
*/