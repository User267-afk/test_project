//2. Write a program demonstrating the use of a virtual destructor.

#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;
    return 0;
}
