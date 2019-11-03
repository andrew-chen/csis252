#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "personType.h"
#include "listType.h"
void output(const listType<personType>& people)
{
   ofstream out;
   personType p;
   out.open("output");
   for (int i=0; i<people.listSize(); i++)
   {
      people.retrieveAt(i,p);
      out << p.getName() << " was born on "
           << p.getMonth() << '-' << p.getDay() << '-' 
           << p.getYear() << endl;
   }
   out.close();
}
