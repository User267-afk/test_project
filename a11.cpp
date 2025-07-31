/* Wrire a program using dynamic memory allocation to get an input of an array of numbers and find the sum of N numbers stored in the array 
using a function to compute the sum*/

#include <iostream>
using namespace std;

int calculate_sum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculate_sum
    (arr, n);
    cout << "Sum of the entered numbers: " << sum << endl;

    delete[] arr;

    return 0;
}
