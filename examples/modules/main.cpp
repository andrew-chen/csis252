#include <iostream>
using namespace std;
#include "constants.h"

// prototypes
void read(int numbers[],int& count);
void output(const int array[],int n);
int biggest(const int numbers[],int count);

// preconditions: none
int main()
{
   int numbers[arraysize];
   int count;

   read(numbers,count);
   cout << "the array: ";
   output(numbers,count);
   cout << "the biggest is " << biggest(numbers,count)  << endl;

   return 0;
}

