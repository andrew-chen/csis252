// File:    main.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the main function
// The program will read ints from the keyboard into an array until the
// sentinel value is entered, sort them ascendingly, then output them
// to the screen.

#include <iostream>
#include <iomanip>
#include "constants.h"  // quotes for your own includes
using namespace std;

// function prototypes
void read(int numbers[], int& count);
void sort(int numbers[], int count);
void output(const int numbers[], int count);

// Function: main
// Description: the main function of the program that calls other functions
// Input:  <none>
// Output: <none>
// Preconditions: <none> 
// Postconditions: <none>

int main()
{
   int numbers[arraysize];    // array for storing ints
   int count;                 // number of values in the array
   read(numbers,count);
   if (count > 0)
   {
      cout << "array contents: ";
      output(numbers,count);  // output the array as read in
      cout << endl;
      sort(numbers,count);
      cout << "sorted array:   ";
      output(numbers,count);  // output the array that's been sorted
      cout<< endl;
   }
   else
      cout << "array is empty\n";
   return 0;
}
