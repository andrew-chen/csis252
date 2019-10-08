#include <iostream>
using namespace std;

const int sentinel = 0;

int main()
{
   int num;
cerr << "num is " << num << endl;
   int sum=0;
   int count=0;
   cout << "enter ints, " << sentinel << " to quit\n";
   num = 78;  // patch
   while (num != 0)
   {
      cin >> num;
      sum += num; // same as sum = sum+num;
      count++;    // same as count=count+1; or count += 1;
   }
   count--;  // patch
cerr << "sum is " << sum << endl;
cerr << "count is " << count << endl;
   cout << "the average is " << sum/count << endl;

   return 0;
}
