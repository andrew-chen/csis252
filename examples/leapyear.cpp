// Author: Dan Brekke


#include <iostream>
using namespace std;

// Function: leapyear
// Description:  This function returns true if the year is a leap year
//    Leap years occur ever 4 years with the following exception
//      * years that are evenly divisible by 100 are not leap years
//        except if it is also evenly divisible by 400
// Function input: year (int)
// Function output: whether leap year or not (bool)
// precondition: year is within the Gregorian calendar
// postcondition: result of whether leap year or not is returned
bool leapyear(int year)
{
   return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
   int year;
   cout << "enter a year: ";
   cin >> year;
   if (leapyear(year))
      cout << year << " is a leap year\n";
   else
      cout << year << " is NOT a leap year\n";
   return 0;
}
