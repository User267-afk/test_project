//2. Write a Program defining an inline function to compute the area of circle with radius as input.
#include <iostream>
using namespace std;

inline float area(float r){
    retun 3.14*r*r;
}

int main()
{
  float r;
  cout << "The area of circle is: " << area(radius) << endl;
  return 0;
}