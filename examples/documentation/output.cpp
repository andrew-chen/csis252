// File:    output.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the function output

#include <iostream>
using namespace std;

// Function: output
// Description: outputs the array to the screen
// Input:  numbers (array of int)
//         count (int) - the number of values in the array
// Output: <none>
// Preconditions:  count contains the number of values in the array
// Postconditions: the array was output to the screen

void output(const int numbers[], int count)
{
   for (int i=0; i<count; i++)
      cout << numbers[i] << ' ';
}

