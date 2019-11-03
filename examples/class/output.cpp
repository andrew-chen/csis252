#include <string>
#include <iostream>
using namespace std;
#include "personType.h"
void output(const personType people[], int count)
{
   for (int i=0; i<count; i++)
      cout << people[i].getName() << " was born on "
           << people[i].getMonth() << '-' << people[i].getDay() << '-' 
           << people[i].getYear() << endl;
}
