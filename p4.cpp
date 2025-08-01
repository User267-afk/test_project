/*4. Create an abstract class "Student" with derived classes "Engineering", "Medicine", and "Science". The program should create objects of
these derived classes and process/access them using an array of pointers of type base class "Student".*/

#include <iostream>
using namespace std;

class Student {
public:
    virtual void display() = 0;
    virtual ~Student() {}
};

class Engineering : public Student {
public:
    void display() override {
        cout << "Engineering student\n";
    }
};

class Medicine : public Student {
public:
    void display() override {
        cout << "Medicine student\n";
    }
};

class Science : public Student {
public:
    void display() override {
        cout << "Science student\n";
    }
};

int main() {
    Student* students[3];

    students[0] = new Engineering();
    students[1] = new Medicine();
    students[2] = new Science();

    for (int i = 0; i < 3; ++i) {
        students[i]->display();
        delete students[i];
    }

    return 0;
}
