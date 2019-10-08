#include <iostream>

using namespace std;

int main()
{
   int x=6;
   int y=27;
   int *p;  // p is a pointer to an int
   cout << "the address of x is:      " << &x << endl;
   cout << "the address of y is:      " << &y << endl;
   cout << "address of p is:          " << &p << endl;
   p=&x;  // p is assigned the address of x
   cout << "p is pointing at address: " << p << endl;
   cout << *p << endl;  // output what p is pointing at
   *p=17;  // what p is pointing at is assigned 17
   cout << x << endl;
   p = &y;  // p is assigned the address of y
   cout << "p is pointing at address: " << p << endl;
   cout << *p << endl;  // output what p is pointing at
   return 0;
}
