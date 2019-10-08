#include <iostream>
using namespace std;

int main()
{
   int num;
   do
   {
      cout << "enter a positive int: ";
      cin >> num;
   }
   while (num <= 0);
   cout << "you entered: " << num << endl;
   return 0;
}
