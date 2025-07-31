//8. Write different programs to implement passing by reference and passing by value in C++.
//a. Passing by reference.

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = 0;
  temp = a;
  a    = b;
  b    = temp;
}

int main()
{
    int x , y;

    cout << "Enter any two integers" << endl;
    cin >> x >> y;
    cout << "The integers before swapping are: " << x << " " <<  y << endl;

    swap(x,y); 

    cout << "The integers after swapping by passing by reference are: "  << x << " " <<  y << endl;

return 0;
}


