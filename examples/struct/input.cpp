#include <fstream>
using namespace std;
#include "constants.h"
#include "personType.h"

void input(personType people[], int& count)
{
   count = 0;
   ifstream f;
   f.open("people");
   string name;
   char tempch;
   getline(f,name);
   while (!f.eof() && count < arraymax)
   {
      people[count].name = name;
      f >> people[count].month; 
      f >> tempch;
//      f.ignore(80,'/');
      f >> people[count].day; 
      f >> tempch;
      f >> people[count].year; 
      count++;
      f.ignore(80,'\n');
      getline(f,name);
   }
   f.close();
}

