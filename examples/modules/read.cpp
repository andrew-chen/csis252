#include <iostream>
using namespace std;

#include "constants.h"

void read(int numbers[],int& count)
{
   int num;
   count=0;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count++] = num;
      cin >> num;
   }
}
