/*1. Create a class called "shape" with functions to find area and display shape names. Then create derived classes (circle, rectangle, 
trapezoid) that override the area() and display() functions. The program should demonstrate virtual functions and virtual destructors.*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}
    float area() override {
        return 3.14159f * radius * radius;
    }
    void display() override {
        cout << "Shape: Circle, Radius: " << radius << ", Area: " << area() << endl;
    }
    ~Circle() override {}
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() override {
        return length * width;
    }
    void display() override {
        cout << "Shape: Rectangle, Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
    ~Rectangle() override {}
};

class Trapezoid : public Shape {
private:
    float base1, base2, height;

public:
    Trapezoid(float b1, float b2, float h) : base1(b1), base2(b2), height(h) {}
    float area() override {
        return 0.5f * (base1 + base2) * height;
    }
    void display() override {
        cout << "Shape: Trapezoid, Base1: " << base1 << ", Base2: " << base2
             << ", Height: " << height << ", Area: " << area() << endl;
    }
    ~Trapezoid() override {}
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Trapezoid(3.0, 5.0, 4.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
