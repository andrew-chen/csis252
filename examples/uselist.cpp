#include <iostream>
using namespace std;
#include "listType.h"

void read(listType<int>& list)
{
   int num;
   cout << "enter ints, 0 to quit\n";
   cin >> num;
   while (num != 0 && !list.isFull())
   {
      list.insertEnd(num);
      cin >> num;
   }
}

void myprint(const listType<int>& list)
{
   int num;
   for (int i=0; i<list.listSize(); i++)
   {
      list.retrieveAt(i,num);
      cout << num << endl;
   }
}

int main()
{
   listType<int> list;
   read(list);
   myprint(list);
//   list.print();
   return 0;
}

