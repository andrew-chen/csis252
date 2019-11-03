//#include <iostream>
#include <fstream>  // #1 include fstream
using namespace std;

#include "constants.h"

void read(int numbers[],int& count)
{
   ifstream infile; // #2 declare a filestream variable
   infile.open("numbers");  // #3 open the file
   int num;
   count=0;
   infile >> num;  // #4 use the file
   while (!infile.eof() && count < arraysize)
   {
      numbers[count++] = num;
      infile >> num;  // #4 use the file
   }
   infile.close();  // #5 close the file
}
