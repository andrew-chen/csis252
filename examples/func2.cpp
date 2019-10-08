#include <iostream>
using namespace std;

// int v = 8;  we don't declare variables outside of functions
const int arraysize = 10; // constants should be declared outside 
                          // of functions

// scope rule: anything declared in a function is not known outside function

// name of the actual and formal parameters don't need to match
void bad_add(int a,int b)
{
   int result;
   result = a+b;
   cout << "the sum is " << result << endl;
}

int good_add(int a,int b)
{
   /*
   int result;
   result = a+b;
   return result;
   */
   return a+b;
}

int main()
{
   int w = 12;
   int x = 7;
   // if a function is void, the function call goes on a line by itself
   bad_add(w,x);
   cout << "the sum is " << good_add(w,x) << endl;
   int y = 4;
   int z = 13;
   // if a function returns a value, you must to something with it
   cout << good_add(w,x) + good_add(y,z) << endl;
   return 0;
}
