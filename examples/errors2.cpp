#include <iostream>
#include <iomanip>

using namespace std;


int main()
{


   int number;         // the number input from the keyboard
       count;          // the value to check if it divides evenly

   cout << "Enter a positive whole number: ";
   cin >> Number;

   cout << "The following numbers evenly divide into "  number << endl;
   cout << setw(4) << 1;      // report 1 as it always divides evenly

   for (count=2; count <= number/2; count++)
   {
      remainder = number;
      while (remainder >= count)    // loop to calculate the remainder
         remainder = remainder-count
      if (remainder == 0)
         cout << setw(4) << count
   }
   cout << setw(4) << number << endl;   // report the number itself

   return 0;
}
