/*6. Write program with objects as function(to add time) argument by passing by value, passing by address and passing by reference defining a
class Time with data member hour, minute, second as integers. Write member functions to read the data for objects and to show the value of
objects of Time. */

#include <iostream>
using namespace std;

class Time
{
private:
     int hour, minute, second;

public:
 void get_data()
 {
     cout << "Enter the time in hour, minute and second" << endl;
     cin >> hour >> minute >> second;  
 }

 void show_data()
 {
      cout << "The data are: " << hour << " hour " << minute << " minute " << second << " second" << endl;
 }


 void add_data_byValue(Time t1, Time t2)
 {
    int fhour=0, fminute=0, fsecond=0;

    fsecond = t1.second + t2.second;
    fminute = t1.minute + t2.minute + fsecond/60;
    fhour   = t1.hour + t2.hour + fminute/60;
    fminute = fminute % 60;
    fsecond = fsecond % 60;
    hour    = fhour;
    minute  = fminute;
    second  = fsecond;    
 }

 void add_data_byAddress(Time *t1, Time *t2)
 {
    int fhour=0, fminute=0, fsecond=0;

    fsecond = t1->second + t2->second; // Member access operator(using pointer)
    fminute = t1->minute + t2->minute + fsecond/60;
    fhour   = t1->hour + t2->hour + fminute/60;
    fminute = fminute % 60;
    fsecond = fsecond % 60;

    hour    = fhour;
    minute  = fminute;
    second  = fsecond;    
 }

 void add_data_byReference(Time &t1, Time &t2)
 {
    int fhour=0, fminute=0, fsecond=0;

    fsecond = t1.second + t2.second;
    fminute = t1.minute + t2.minute + fsecond/60;
    fhour   = t1.hour + t2.hour + fminute/60;
    fminute = fminute % 60;
    fsecond = fsecond % 60;
    hour    = fhour;
    minute  = fminute;
    second  = fsecond;    
 }



};


int main()
{
    Time t1,t2,t3,t4,t5;

    t1.get_data();
    t2.get_data();

    t3.add_data_byValue(t1,t2);
    t4.add_data_byAddress(&t1,&t2);
    t5.add_data_byReference(t1,t2);
    
    t1.show_data();
    t2.show_data();
    cout << endl;
    
    cout << "For t3:" << endl;
    t3.show_data();

    cout << "For t4:" << endl;
    t4.show_data();

    cout << "For t5:" << endl;
    t5.show_data();
   
return 0;
}