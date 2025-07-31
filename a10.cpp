//Write a C++  program to illustrate dynamic allocation and de-allocation using new and delete.

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; 
    *ptr = 10;
    cout << "Value of dynamically allocated integer: " << *ptr << endl;
    
    delete ptr;
    
    int *arr = new int[5]; 
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    cout << "Values in dynamically allocated array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    
    return 0;
}





