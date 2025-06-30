/*4. Write a program overloading function sort() to sort an array of integers, characters as well as floating point numbers(Use any
sorting algorithm).*/

#include <iostream>
#include <cstring>
using namespace std;

void sort(int x[], int zz)
{
   int  g,h,temp;
   for(g=0;g<zz-1;g++)
   {


    for(h=g+1;h<zz;h++)
     {
        if(x[g]>x[h])
        {
          temp=x[g];
          x[g]=x[h];
          x[h]=temp;
        }
     }
    }
 }


 void sort(char y[], int yz)
{
   int  i,j,temp;
   for(i=0;i<yz-1;i++)
   {


    for(j=i+1;j<yz;j++)
     {
        if((int) y[i]>(int) y[j])
        {
          temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
     }
    }
 }

 void sort(float z[], int xz)
{
   int  k,l;
   float temp;
   for(k=0;k<xz-1;k++)
   {
    for(l=k+1;l<xz;l++)
     {
        if(z[k] > z[l])
        {
          temp=z[k];
          z[k]=z[l];
          z[l]=temp;
        }
     }
    }
 }


int main()
{
    int a[10], m,n,o;
    char b[20];
    float c[10];

    cout << "Enter any 10 integers you want to sort" << endl;
    for(m=0; m <10; m++)
    {
        cin >> a[m]; 
    }

    cout << "Enter any 10 floating points you want to sort" << endl;
    for(n=0;n<10;n++)
    {
        cin >> c[n]; 
    }
    
    cout << "Enter a word you want to sort:" << endl;
    cin.ignore();
    cin.getline(b,sizeof(b));

    sort(a,10);
    sort(b,strlen(b));
    sort(c,10);



cout << "The sorted array of integers is: " ;
for(m=0; m<10 ;m++)
{
   cout << a[m] << " "; 
}
cout << endl;

cout << "The sorted word is: " << b << endl;

cout << "The sorted array of floating point is: " ;
for(n=0; n<10 ;n++)
{
   cout << a[n] << " "; 
}

    return 0;

}