#include <iostream>
#include <iomanip>  // for output formatting
#include <cmath>

using namespace std;

int main()
{

   cout << fixed << showpoint << setprecision(2); // format to 2 decimals

   cout << sqrt(25) << endl; // sqrt returns floating point
   cout << pow(3,4) << endl; // pow returns floating point

   return 0;
}
