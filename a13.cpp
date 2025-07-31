//13. Write a program to illustrate constructor overloading in C++.

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    Rectangle(int l) {
        length = l;
        width = l;
        cout << "Single-parameter constructor called." << endl;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Two-parameter constructor called." << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1;
    rect1.display();

    Rectangle rect2(5);
    rect2.display();

    Rectangle rect3(4, 6);
    rect3.display();

    return 0;
}

