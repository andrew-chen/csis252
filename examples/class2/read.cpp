#include<fstream>
#include<string>
using namespace std;
#include "personType.h"
#include "constants.h"

void read(personType people[], int& count)
{
   ifstream infile;
   string name;
   int month,day,year;
   char dummyChar;
   personType person;
   count = 0;
   infile.open("people");
   getline(infile,name);
   while (!infile.eof() && count<arraysize)
   {
      person.setName(name);
      infile >> month;
      person.setMonth(month);
      infile >> dummyChar;
      infile >> day;
      person.setDay(day);
      infile >> dummyChar;
      infile >> year;
      person.setYear(year);
      people[count] = person;
      count++;
      infile.ignore(80,'\n');
      getline(infile,name);
   }
   infile.close();
}

