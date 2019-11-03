#include <iomanip>
#include <fstream>
using namespace std;

#include "personType.h"

void output(const personType people[], int count)
{
   ofstream out;
   out.open("result");
   for (int i=0; i<count; i++)
      out << left << setw(25) << people[i].name
          << people[i].month << '/' << people[i].day
          << '/' << people[i].year << endl;
   out.close();
}

