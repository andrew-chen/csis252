#include <iostream>
using namespace std;

int main()
{
   short array[] = {1,2,3,4,5};
   for (int i=0; i<5; i++)
      cout << array[i] << endl;
   cout << "------------------------------\n";
   for (int i=0; i<5; i++)
      cout << &array[i] << endl;
   cout << "------------------------------\n";
   cout << array << endl;
   return 0;
}
