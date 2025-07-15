/*Write a C++ program to design a base class Person(name, address, phone). Derive a class Employee(eno, ename) from Person. Derive a class
Manager(designation, dept_name, basic_salary) from Employee. Write a program to:

1. Accept all details of ‘n’ managers
2. Display manager having highest salary
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    string address;
    string phone;
public:
    void get_data() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter phone: ";
        cin >> phone;
    }

    void show_person() {
        cout << "Name: " << name << "\nAddress: " << address << "\nPhone: " << phone << endl;
    }

    string get_name() {
        return name;
    }
};

class Employee : public Person {
protected:
    int eno;
public:
    void get_employee_data(int num) {
        eno = num;
        get_data();
    }

    int get_eno() {
        return eno;
    }
};

class Manager : public Employee {
private:
    string designation;
    string dept_name;
    float basic_salary;
public:
    void get_manager_data(int num) {
        get_employee_data(num);
        cout << "Enter designation: ";
        cin.ignore();
        getline(cin, designation);
        cout << "Enter department name: ";
        getline(cin, dept_name);
        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }

    float get_salary() const {
        return basic_salary;
    }

    void show_manager() const {
        cout << "\n--- Manager Details ---\n";
        cout << "Employee No: " << eno << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Department: " << dept_name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    vector<Manager> managers(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for manager " << i + 1 << ":\n";
        managers[i].get_manager_data(i + 1);
    }

    // Find manager with highest salary
    float max_salary = managers[0].get_salary();
    int max_index = 0;

    for (int i = 1; i < n; ++i) {
        if (managers[i].get_salary() > max_salary) {
            max_salary = managers[i].get_salary();
            max_index = i;
        }
    }

    cout << "\nManager with highest salary:\n";
    managers[max_index].show_manager();

    return 0;
}
