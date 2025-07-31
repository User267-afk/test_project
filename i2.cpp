/*2. Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class.
A class will be derived from the above mentioned class which includes a function to find the total marks obtained and another class derived
from this class which calculates and displays the percentage of student. */

#include <iostream>
using namespace std;

class marks
{
 protected:
  float marks[3];

public:
   void get_marks()
   {
    cout << "Enter the marks obtained of three subjects (Out of 100)" << endl;
    cin >> marks [0] >> marks [1] >> marks[2] ;
   }  
};

class add: public marks
{
 protected:
  float sum=0;
   
 public:
  void add_marks()
  {
    sum = marks[0] + marks[1] + marks[2];
  }
};

class find_percentage : public add
{
 private:
  float percentage=0;
 
 public:
  void calc_percentage()
  {
    percentage = ((marks[0] + marks[1] + marks[2]) / 300) * 100;
  }

  void show_percentage()
  {
    cout << "The total percentage obtained by the student is: " << percentage << " %" << endl;
  }
};


int main()
{
    find_percentage obj;

    obj.get_marks();
    obj.add_marks();
    obj.calc_percentage();
    obj.show_percentage();

return 0;
}
