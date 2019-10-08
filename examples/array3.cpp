#include <iostream>
using namespace std;

const int sentinel = -999;
const int arraysize = 5;

int main()
{
   int numbers[arraysize];
   int count=0;
   int sum=0;
   double average;
   int biggest;

   cout << "enter ints (" << sentinel << " to quit)\n";
   cin >> numbers[count];  // never read directly into an array
   while (numbers[count] != sentinel && count < arraysize)
   {
      count++;
      cin >> numbers[count];
   }

   for (int j=0; j<count; j++)
      cout << numbers[j] << ' ';
   cout << endl;

   return 0;
}
