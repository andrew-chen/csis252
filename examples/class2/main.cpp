#include <fstream>
#include <iostream>
#include <string>
#include "constants.h"
#include "personType.h"
using namespace std;

void sort(personType[],int count);
void output(const personType[],int count);
void read(personType[],int& count);

int main()
{
   personType people[arraysize];
   int count;

   read(people,count);
   sort(people,count);
   output(people,count);
   personType p1;
   personType p2("Doe, John");
   personType p3("Doe, Jane",3,12,1992);
   if (p2 > p3)
       cout << "yes\n";
   else
       cout << "no\n";
   cout << p2 << endl;
   cout << p3 << endl;
   cin >> p2 >> p3;
   cout << p2 << endl;
   cout << p3 << endl;

   return 0;
}


