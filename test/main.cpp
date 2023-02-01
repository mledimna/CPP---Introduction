#include <iostream>

int integer = 0;

// Class declaration
class A{
public:
    A(void){};
    
    A(int _integer){
        // this defines class pointer
        this->integer = _integer;
        integer = ++_integer;
    }

    ~A(void){
        integer = 0;
    }

    int get_integer(void){
        return this->integer;
    }
private:
    int integer = 0;
};

void creer_detruire(void){
    A var(12);
    int a = var.get_integer();
}

int main(int, char**) {
    creer_detruire();
}