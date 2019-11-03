#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "personType.h"
void output(const personType people[], int count)
{
   ofstream out;
   out.open("output");
   for (int i=0; i<count; i++)
      out << people[i].getName() << " was born on "
           << people[i].getMonth() << '-' << people[i].getDay() << '-' 
           << people[i].getYear() << endl;
   out.close();
}
