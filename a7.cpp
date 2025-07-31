/*7. Define a friend function addtime() with objects as arguments and return the sum of two objects. Show
the values of each object and their sum as output.*/

#include <iostream>
using namespace std;

class ClassB; // Initial declaration

class ClassA
{
    private:
       int  hour, minute, second;

    public:
       void get_time()
       {
        cout << "Enter your time (hour, minute and second) " << endl;
        cin >> hour >> minute >> second;
       }
      
     friend void addtime(ClassA t1, ClassA t2, ClassA &t3);
};

     void addtime(ClassA t1, ClassA t2, ClassA &t3)
     {
        int fmin= 0, fsec= 0;
        cout << "The first time entered was: " << t1.hour << " hour " << t1.minute << " minute " << t1.second << " second " << endl;
        cout << "The second time entered was: " << t2.hour << " hour " << t2.minute << " minute " << t2.second << " second " << endl;

        fsec      = t1.second + t2.second;
        fmin      = t1.minute +t2.minute + fsec/60; 
        t3.hour   = t1.hour + t2.hour + fmin/60;
        t3.minute = fmin % 60;
        t3.second = fsec % 60;
        
        cout << "The sum of time is: " << t3.hour << " hour " << t3.minute << " minute " << t3.second << " second " << endl;
      
     }


int main()
{
    ClassA t1 ,t2 ,t3;

    t1.get_time();
    t2.get_time();

    addtime(t1,t2,t3);

    return 0;
}