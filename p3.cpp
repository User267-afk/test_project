//3. Write a program demonstrating the use of the "this" pointer.

#include <iostream>

class test {
private:
    int value;
public:
    test(int value) {
        this->value = value;
    }

    void display() {
        std::cout << "Value: " << this->value << std::endl;
    }
};

int main() {
    test obj(42);
    obj.display();
    return 0;
}
