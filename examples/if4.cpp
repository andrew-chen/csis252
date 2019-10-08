#include <iostream>
using namespace std;

int main()
{
   cout << true << endl;
   cout << false << endl;
   if (10)
      cout << "yes\n";
   else
      cout << "no\n";
   int num;
   cout << "enter an int: ";
   cin >> num;
//   if (-9 <= num <= 9)  always true
   if (-9 <= num && num <= 9)
      cout << num << " is a single digit number\n";
   else
      cout << num << " is a NOT single digit number\n";
   return 0;
}
