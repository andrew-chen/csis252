#include <iostream>
#include "sort.h"
using namespace std;

/* This distribution contains an example of a templated function.  A
   templated function allows a parameter of any type to be passed to
   it.  The compiler will generate code for the parameter type.  
   Specific to this example, there is a templated sort function in 
   sort.h.  As seen below, the sort function is called 3 different
   times with different array types.  That means the compiler will
   generate 3 different functions, one to sort an array of ints, one
   for double, and one for char.  Because of this, a templated
   function cannot be compiled separately because the compiler would
   not know the type of the parameter (it is a template).  Instead
   the templated function must be included into the stream going to
   the compiler which is why the sort function is in a .h file and
   included above, not compiled separately.
*/

int main()
{
   int intArray[] = {6,4,8,5,7,2};
   int intCount = 6; 
   double doubleArray[] = {45.32, 75.4, 83.43, 12,23, 53.64};
   int doubleCount = 5;
   char charArray[] = "hellothere";
//   char charArray[] = {'h','e','l','l','o','t','h','e','r','e','\0'};
   int charCount = 10;
   sort(intArray,intCount);
   sort(doubleArray,doubleCount);
   sort(charArray,charCount);

   for (int i=0; i<intCount; i++) 
      cout << intArray[i] << ' ';
   cout << endl;
   for (int i=0; i<doubleCount; i++) 
      cout << doubleArray[i] << ' ';
   cout << endl;
   for (int i=0; i<charCount; i++) 
      cout << charArray[i] << ' ';
   cout << endl;
   return 0;
}

