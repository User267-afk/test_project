//12. Write a program to implement user defined constructor and copy constructor.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "User-defined constructor called." << endl;
    }

    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("Ram", 2);
    person1.display();

    Person person2 = person1;
    person2.display();

    return 0;
}
