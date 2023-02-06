#include <iostream>
#include "main.hpp"

int main(void){
    std::cout << "Hello" << std::endl;

    if (1){
        Personne mathieu("Mathieu", 25);
        DarthVader vader("Green");

        vader.tell_name();

        //vader.breathe();

        mathieu.tell_name();
        mathieu.set_name("");

        if (1) {
            Personne toto("");
            toto.tell_name();
        }

        mathieu.tell_name();
    }

    std::cout << "Bye" << std::endl;

    return 0;
}