#include "personType.h"
#include <string>
using namespace std;


personType::personType(const string& n,int m,int d, int y)
{
   setName(n);
   setMonth(m);
   setDay(d);
   setYear(y);
}

personType::personType()
{
//    setName("");
//    setMonth(0);
//    setDay(0);
//    setYear(0);
}

personType::personType(const string& n)
{
   setName(n);
}


string personType::getName() const
{
   return name;
}

void personType::setName(const string& n)
{
   name = n;
}

int personType::getMonth() const
{
   return month;
}

void personType::setMonth(int m)
{
   month = m;
}

int personType::getDay() const
{
   return day;
}

void personType::setDay(int d)
{
   day = d;
}

int personType::getYear() const
{
   return year;
}

void personType::setYear(int y)
{
   year = y;
}


