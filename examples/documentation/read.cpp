// File:    read.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the function read. 

#include <iostream>
#include "constants.h"
using namespace std;

// Function: read
// Description: reads ints from standard input (keyboard) until the sentinel
//              value is entered and stores them them in an array.
// Input:  <none>
// Output: numbers (array of int)
//         count (int) - the number of values read and stored into the array
// Preconditions:  <none>
// Postconditions: The array will be populated with the values entered
//                 from the keyboard and the count will contain the number 
//                 of values in the array.  An error message will be output
//                 if the array size was exceeded.

void read(int numbers[], int& count)
{
   count = 0; 
   cout << "enter ints, " << sentinel << " to quit: ";
   int num;
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
   if (num != sentinel)
      cout << "array size exceeded, not all input was stored in the array\n";
}

