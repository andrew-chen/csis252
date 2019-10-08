#include <iostream>
#include <iomanip>
using namespace std;

const int sentinel = 0;

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int sum;
   int num;
   int count;
   double average;
   sum = 0;
   count = 0; 
   cout << "enter ints (" << sentinel << " ends input)\n";
   cin >> num;
   while (num != sentinel)
   {
      if (num>0)
      {
         sum = sum+num;
         count = count+1;
      }
      cin >> num;
   }
   average = static_cast<double>(sum)/count;
   cout << "average of the positive ints: " << average << endl;
   return 0;
}
