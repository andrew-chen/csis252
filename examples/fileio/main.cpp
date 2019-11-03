//#include <iostream>
#include <fstream>
using namespace std;
#include "constants.h"

// prototypes
void read(int numbers[],int& count);
void output(ofstream&, const int array[],int n);
int biggest(const int numbers[],int count);

// preconditions: none
int main()
{
   int numbers[arraysize];
   int count;
   ofstream out;
   out.open("result");

   read(numbers,count);
   out << "the array" << endl;
   output(out,numbers,count);
   out << "the biggest is " << biggest(numbers,count)  << endl;
   out.close();

   return 0;
}

