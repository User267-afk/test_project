//3. Write a program to get input a string and print the string and its reverse. Define your own function to reverse the string in your program. 
#include <iostream>
#include <cstring>
using namespace std;
 
void string_reverse(char b[] ,int n)
 {
        int temp;
      for(int i=0; i < n/2 ; i++)
      {
        temp=b[i];
        b[i]=b[n-i-1];
        b[n-i-1]=temp;
      }
 }

int main()
{
 char a[20];
 int n;

 cout << "Enter a string" << endl; 
 cin.getline(a, sizeof(a) );

 n= strlen(a);

 cout << "The entered  string is: " << a << endl;

 string_reverse(a,n);
 cout << "The reverse of the given string is: " << a << endl;

return 0;
}