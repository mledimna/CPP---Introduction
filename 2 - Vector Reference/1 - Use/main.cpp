#include <vector>
#include <iostream>

void print_vector(std::vector<int> &_vector){
    std::cout << "Vector content" << std::endl << "[";
    for (int i=0; i<_vector.size(); i++) std::cout << std::to_string(_vector.at(i)) + ", ";
    std::cout << "]" << std::endl;
}

int main(void){
    std::vector<int> integer_vector;

    integer_vector.push_back(1);
    integer_vector.push_back(2);
    integer_vector.push_back(3);
    integer_vector.push_back(4);
    integer_vector.push_back(5);
    integer_vector.push_back(6);

    print_vector(integer_vector);

    return 0;
}