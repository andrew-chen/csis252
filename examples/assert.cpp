#include <iostream>
#include <cassert>
using namespace std;

int main()
{
   int x;
   cout << "enter a positive int: ";
   cin >> x;
   assert(x>0);
   for (int i=x; i>0; i--)
      cout << i << ' ';
   cout << endl;
   return 0;
}
