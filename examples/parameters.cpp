#include <iostream>
using namespace std;

// x and y are pass by value parameters
void func1(int x,int y)
{
   cout << "in func1: " << &x << ' ' << &y << endl;
   x = 0;
   y = 0;
}

// x and y are pass by reference parameters
void func2(int& x,int& y)
{
   cout << "in func2: " << &x << ' ' << &y << endl;
   x = 0;
   y = 0;
}


int main()
{
   int a=12;
   int b=7;
   cout << "in main:  " << &a << ' ' << &b << endl;
   cout << "----------------------------\n";
   func1(a,b);
   cout << a << ' ' << b << endl;
   cout << "----------------------------\n";
   func2(a,b);
   cout << a << ' ' << b << endl;

   return 0;
}
