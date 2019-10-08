// This example shows the proper way of inputting values until a sentinel
// value is input.  Read outside the loop (a priming read) and read at
// the bottom of the loop.

#include <iostream>
#include <iomanip>
using namespace std;

const int sentinel = 0;

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int num;
//cerr << "num is " << num << endl;
   int sum=0;
   int count=0;
   double average;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel)
   {
      sum += num; // same as sum = sum+num;
      count++;    // same as count=count+1; or count += 1;
      cin >> num;
   }
//cerr << "sum is " << sum << endl;
//cerr << "count is " << count << endl;
   average = static_cast<double>(sum)/count;
   cout << "the average is " << average << endl;

   return 0;
}
