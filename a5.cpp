/*5. Write a program that uses a structure Distance with data members meter and centimeter. Add functions in structure to take input and output
 as well as the function to add the two variables of Distance and return the sum. Your program should display the result. */
 #include <iostream>
 using namespace std;

 struct Distance{
    private:
    int meter;
    int centimeter;

    public:
    void get_data()
    {
        cout << "Enter your data ( meter and centimeter)" << endl;
        cin >> meter >> centimeter;
    }

    void add(Distance d1,Distance d2)
    {
        int fmeter=0.00, fcentimeter=0.00;
        fcentimeter= d1.centimeter + d2.centimeter; 
        fmeter=fcentimeter/100;
        fmeter+= d1.meter+d2.meter;
        fcentimeter=fcentimeter % 100;
        meter=fmeter;
        centimeter=fcentimeter;
    }

    void show_data()
    {
        cout << meter << " meter " << centimeter << " centimeter" << endl;
    }
 };


 int main()
 {
    Distance d1, d2, sum;
    d1.get_data();
    d2.get_data();
   
    cout << "The entered data for d1 are: ";
    d1.show_data();

    cout<< "The entered data for d2 are: ";
    d2.show_data();
  
    sum.add(d1,d2);
    cout << "The sum of two variables of distance are: ";
    sum.show_data();
    
return 0;
 }