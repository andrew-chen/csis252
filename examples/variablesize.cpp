// This example shows a variable size array
// This is a poor programming practice as we should use a constant size
// a variable size array is a g++ extension, not standard C++
// g++ -pedantic variablesize.cpp             gives a warning
// g++ -pedantic-errors variablesize.cpp      gives an error

#include <iostream>
using namespace std;

const int sentinel=0;

int main()
{
   int arraysize;
   cout << "how big of an array do you want? ";
   cin >> arraysize;
   int numbers[arraysize];
   int count=0;
   int num;
   cout << "enter ints (" << sentinel << " to quit): ";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   if (num != sentinel)
      cout << "some of the input was not stored in the array\n";
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
   cout << endl;
   return 0;
}
