#include <iostream>

class MyClass{
public:
    // Public constructor
    MyClass(const std::string _name){
        this->setName(_name);
    }

    // Public method
    void setName(const std::string _name){
        this->name = _name;
    }

    // Public method
    const std::string getName(void){
        return this->name;
    }

private:
    // Private attribute
    std::string name;
};

int main(int, char**) {
    // Class declaration
    MyClass var("ClassName");

    // Print class name via public method:
    std::cout << var.getName() << std::endl;

    // Change class name using method
    var.setName("Changed Name");

    // Print class name via public method:
    std::cout << var.getName() << std::endl;

    // Impossible : var.name = "New name";
    // name is a private attribute and cannot be accessed

    return 0;
}
