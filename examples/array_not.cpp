// This example shows what we can't do with arrays.
// Exception for input and output: arrays of char (C-strings)

#include <iostream>
using namespace std;

int main()
{
   int array[] = {1,2,3,4,5};
   int array2[] = {1,2,3,4,5};
   cout << array << endl; // can't output the contents of an array
   cout << array2 << endl;
//   array = {6,7,8,9,10};  can't assign to an array
//   array = array2;
//   for (int i=0; i<5; i++)
//      array[i] = array2[i];
//   cin >> array;  can't input into an array
   if (array == array2)
      cout << "yup\n";
   else
      cout << "nope\n";

   char name[] = "Dan Brekke";
   cout << name << endl;
   cin >> name;
   cout << name << endl;
   return 0;
}
