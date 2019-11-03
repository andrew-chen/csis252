// File:    sort.cpp
// Author:  Dan Brekke
// Program: class example
// Date:    

// Description: This file contains the function sort

using namespace std;

// Function: sort
// Description: The function will sort an array of ints ascendingly
// Input:  numbers (array of int)
//         n (int) - the number of values in the array
// Output: numbers (array of int) - sorted ascendingly
// Preconditions:  n contains the number of values store in the array
// Postconditions: The array of ints is arranged in ascending order

void sort(int numbers[], int n)
{
   int temp;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (numbers[j] < numbers[small])
            small=j;
      temp = numbers[i];         // put smallest in proper position
      numbers[i] = numbers[small];
      numbers[small] = temp;
   }
}

