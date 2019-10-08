#include <iostream>
using namespace std;

int main()
{
   bool a = true;
   bool b = false;
   a &= b;  // same as: a = a && b;
   cout << a << endl;
   return 0;
}
