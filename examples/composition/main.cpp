#include <fstream>
#include <iostream>
#include <string>
#include "personType.h"
#include "dateType.h"
using namespace std;

int main()
{
   personType p1;
   personType p2("Doe, John");
   personType p3("Doe, Jane",dateType(3,12,1992));
   dateType d(4,27,1992);
   p2.setBirthday(d);
   if (p2 > p3)
       cout << "yes\n";
   else
       cout << "no\n";
   cout << p2 << endl;
   cout << p3 << endl;
   cout << p2.getBirthday() << endl;
   cout << p2.getBirthday().getDay() << endl;
   cout << p2.getBirthday().getMonth() << endl;
   cout << p2.getBirthday().getYear() << endl;
// the next line will get a copy of p2 and change it's date
// with no effect on p2
   p2.getBirthday().setDate(1,31,1990);
   cout << p2.getBirthday() << endl;

   return 0;
}


