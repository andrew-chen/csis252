#include <iostream>
using namespace std;

int main()
{
   int num1=5,num2;
   num1++;
   cout << num1 << endl;
   ++num1;
   cout << num1 << endl;
   char ch='x';
   ch++;
   cout << ch << endl;
   ++ch;
   ch++;
   cout << ch << endl;

   num2 = num1++;  // post increment
   cout << num1 << ' ' << num2 << endl;
   num2 = ++num1;  // pre increment
   cout << num1 << ' ' << num2 << endl;
   return 0;
}
