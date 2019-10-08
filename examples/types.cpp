#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
// integer types
   int num1;
   short int num2;
   short num3;
   long int num4;
   long num5;
   cout << "int is " << sizeof(num1) << " bytes\n";
   cout << "short int is " << sizeof(num2) << " bytes\n";
   cout << "short is " << sizeof(num3) << " bytes\n";
   cout << "long int is " << sizeof(num4) << " bytes\n";
   cout << "long is " << sizeof(num5) << " bytes\n\n";
   cout << INT_MAX << endl;
   cout << INT_MIN << endl;

   cout << SHRT_MAX << endl;


 // floating point types
   float num6;
   double num7;
   long double num8;
   cout << "float is " << sizeof(num6) << " bytes\n";
   cout << "double is " << sizeof(num7) << " bytes\n";
   cout << "long double is " << sizeof(num8) << " bytes\n\n";


   // character
   char ch;
   cout << "char is " << sizeof(ch) << " byte\n\n";

// boolean (true / false)
   bool b;
   cout << "bool is " << sizeof(b) << " byte\n\n";

// unsigned type
   unsigned un1;
   unsigned short un2;
   unsigned long un3;
   cout << "unsigned is " << sizeof(un1) << " bytes\n";
   cout << "unsigned short is " << sizeof(un2) << " bytes\n";
   cout << "unsigned long is " << sizeof(un3) << " bytes\n";



   return 0;
}
