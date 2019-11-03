#include<fstream>
#include<string>
using namespace std;
#include "personType.h"
#include "listType.h"

void read(listType<personType>& people)
{
   ifstream infile;
   string name;
   int month,day,year;
   char dummyChar;
   personType person;
   infile.open("people");
   getline(infile,name);
   while (!infile.eof() && !people.isFull())
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
      people.insertEnd(person);
      infile.ignore(80,'\n');
      getline(infile,name);
   }
   infile.close();
}

