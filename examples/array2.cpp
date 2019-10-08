#include <iostream>
using namespace std;

const int arraysize=10;
const int sentinel=-1;
int main()
{
   int numbers[arraysize];
   int count=0;
   int num;
   int big;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      /*
      numbers[count] = num;
      count++;
      */
      numbers[count++] = num;
      cin >> num;
   }
   cout << "----------------\n";
   for (int i=0; i<count; i++)
      cout << numbers[i] << endl;

   // precondition: there is at least 1 value in the array
   big=numbers[0];
   for (int i=1; i<count; i++)
      if (numbers[i]>big)
         big=numbers[i];
   cout << "the biggest is " << big << endl;

   int pos=0;
   int key;
   cout << "enter value to search for: ";
   cin >> key;
   // the for loop is not appropriate and use of break is not permitted here
   for (pos=0; pos<count; pos++)
      if (numbers[pos] == key)
         break;
   if (pos < count)
      cout << key << " found at position " << pos << endl;
   else
      cout << key << " NOT found\n";
   // the use of the while loop is appropriate and properly structured
   bool found = false;
   pos=0;
   while (!found && pos<count)
      if (numbers[pos] == key)
         found = true;
      else
         pos++;
   if (found)
      cout << key << " found at position " << pos << endl;
   else
      cout << key << " NOT found\n";

   return 0;
}
