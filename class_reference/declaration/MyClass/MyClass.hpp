    #ifndef MYCLASS_HPP
    #define MYCLASS_HPP

    #include <iostream>

    // Class declaration
    class MyClass{
    public:
        // Public attribute
        std::string name;

        // Constructor
        MyClass(const std::string _name);
        ~MyClass();

        // Public method
        void tellName(void);
    };

    #endif /* MYCLASS_HPP */