/*5. Imagine in a college hires some lectures. Some lectures are paid in period basis, while others are
paid in month basis. Create a class called lecture that stores ID and name of lectures.From this class
derive two classes, part time, which includes payperhr (type float); and full name which adds
paypermonth (type float). Each of these three classes should have a readdata() fucntion to get its data
from user at the keyboard and printdata() function to display the data. Write a main() function to test
the Full time and part time classes by creating instance of them, asking the user to fill third data 
with readdate() and and display the data with printdata()*/


#include <iostream>
using namespace std;

class Lecture {
protected:
    int id;
    string name;

public:
    void readdata() {
        cout << "Enter Lecture ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Lecture Name: ";
        getline(cin, name);
    }

    void printdata() {
        cout << "Lecture ID: " << id << endl;
        cout << "Lecture Name: " << name << endl;
    }
};

class PartTime : public Lecture {
private:
    float payPerHour;

public:
    void readdata() {
        Lecture::readdata();
        cout << "Enter Pay Per Hour: ";
        cin >> payPerHour;
    }

    void printdata() {
        Lecture::printdata();
        cout << "Pay Per Hour: " << payPerHour << endl;
    }
};

class FullTime : public Lecture {
private:
    float payPerMonth;

public:
    void readdata() {
        Lecture::readdata();
        cout << "Enter Pay Per Month: ";
        cin >> payPerMonth;
    }

    void printdata() {
        Lecture::printdata();
        cout << "Pay Per Month: " << payPerMonth << endl;
    }
};

int main() {
    PartTime pt;
    FullTime ft;

    cout << "--- Part-Time Lecture ---" << endl;
    pt.readdata();

    cout << "--- Full-Time Lecture ---" << endl;
    ft.readdata();

    cout << "\n--- Part-Time Lecture Info ---" << endl;
    pt.printdata();

    cout << "\n--- Full-Time Lecture Info ---" << endl;
    ft.printdata();

    return 0;
}
