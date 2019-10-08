#include <iostream>
using namespace std;

void swap(int& x,int& y)
{
   int temp=x;
   x = y;
   y = temp;
};

int main()
{
   int larger;
   int smaller;
   cout << "enter 2 ints: ";
   cin >> larger >> smaller;
   if (smaller > larger)
      swap(smaller,larger);
   cout << "the larger is " << larger << endl;


   return 0;
}
