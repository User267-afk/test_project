#include <iostream>
using namespace std;

class A{
    public:
    static int a;

};

class B:virtual public A{
    public:
    int b;
};

class C:virtual public A{
    public:
    int c;
};

class D: public B, public C{
    public:
    int d;
};


int main()
{
  D obj;

  obj.a= 10;
  obj.a=1000;

  cout << obj.C::a << endl;
  cout << obj.B::a << endl;
  

    return 0;
}




