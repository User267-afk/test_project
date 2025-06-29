/*1. Write a C++ Program to print the following using cout and manipulators (endl, left, right, setw)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << setw(10) << left << "S.No." << setw(10) << left << "City" << setw(10) << left << "District" << setw(10) << left << "Province" << setw(10) << left << "Population" << endl;
cout << setw(10) << left << "1." << setw(10) << left << "KATHMANDU" << setw(10) << left << "Kathmandu" << setw(10) << left << "Bagmati" << setw(10) << right << "500000" << endl;
cout << setw(10) << left << "2." << setw(10) << left << "Pokhara" << setw(10) << left << "Kaski" << setw(10) << left << "Gandaki" << setw(10) << right << "50000" << endl;
cout << setw(10) << left << "3." << setw(10) << left << "Butwal" << setw(10) << left << "Rupandehi" << setw(10) << left << "Lumbini" << setw(10) << right << "100000" << endl;
cout << setw(10) << left << "4." << setw(10) << left << "Dharan" << setw(10) << left << "Sunsari" << setw(10) << left << "Prov 1" << setw(10) << right << "80000" << endl;

return 0;

}