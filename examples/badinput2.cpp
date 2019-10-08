#include <iostream>
using namespace std;

const int sentinel=0;

int main()
{
   int num;
   int sum=0;
   int count=0;
   cout << "enter ints, " << sentinel << " to quit: ";
   num = 7;  // patch
   while (num!=sentinel)
   {
      cin >> num;
      if (num == sentinel)
         break;  // I do not want you to use break and continue
      sum += num;
      count++;
   }

   cout << "the average is " << static_cast<double>(sum)/count << endl;
   return 0;
}
