#include <vector>
#include <iostream>

void print_vector(std::vector<int> &_vector){
    std::cout << "Vector content" << std::endl << "[";
    for (std::vector<int>::size_type i=0; i<_vector.size(); i++) std::cout << std::to_string(_vector.at(i)) + ", ";
    std::cout << "]" << std::endl;
}

int main(void){
    // Declaration
    std::vector<int> myVector;

    // Append values to vector
    myVector.push_back(5);
    myVector.push_back(10);
    myVector.push_back(15);
    myVector.push_back(20);
    myVector.push_back(25);

    // Remove last element
    myVector.pop_back();

    // Access element
    int firstElement = myVector[0];

    // Using at method
    int firstElement_by_at = myVector.at(0);

    // Get number of elements
    int numElements = myVector.size();

    // Get number of elements and be sure to get the right size type
    std::vector<int>::size_type num_elem = myVector.size();

    // Check if vector is empty
    bool isEmpty = myVector.empty();

    // Use iterators to traverse the elements of a vector.
    std::vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); it++) {
        std::cout << *it << " ";
    }

    print_vector(myVector);

    return 0;
}