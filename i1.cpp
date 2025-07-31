/*Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of
these two numbers in derived class.*/

#include <iostream>
using namespace std;

class enter_data
{
 protected:
     int a, b;

 public:    
     void  get_info()
    {
        cout << "Enter any two integers: " << endl; 
        cin >> a >> b; 
    }
};

class add_info : public enter_data{
   private:
   int sum=0;
    
   public:
   void add()
   {
     sum= a + b;
   }

   void show_data()
   {
    cout << "The entered data and their sum are: " << a << " + " << b << " = "  << sum << endl;
   }
};


int main()
{
    add_info obj;
    
    obj.get_info();
    obj.add();
    obj.show_data();
    
  return 0;  
}