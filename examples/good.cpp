// This program will input a Celsius temperature and output the
// Farenheit temperature equivalent.


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   cout << fixed << showpoint << setprecision(2);  // 2 decimal places
   double celsius,fahrenheit; 
   cout << "enter a celsius temperature: ";
   cin >> celsius; 
   fahrenheit = static_cast<double>(9)/5 * celsius + 32;
   cout << celsius << " degrees celsius is "
        << fahrenheit << " degrees fahrenheit\n";
   return 0;
}

