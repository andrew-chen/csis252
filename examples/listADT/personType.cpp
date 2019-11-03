#include "personType.h"
#include <string>
#include <iostream>
using namespace std;

ostream& operator << (ostream& o, const personType& p)
{
    o << p.getName();
    return o;
}


istream& operator >> (istream& input, personType& p)
{
    string name;
    getline(input,name);
    p.setName(name);
    return input;
}


bool personType::operator < (const personType& p) const
{
   std::cout << "I'm in the operator <\n";
   return getName() < p.getName();
}

bool personType::operator == (const personType& p) const
{
   std::cout << "I'm in the operator ==\n";
   return getName() == p.getName();
}

bool personType::operator != (const personType& p) const
{
   std::cout << "I'm in the operator !=\n";
   return not (*this == p);
}

bool personType::operator >= (const personType& p) const
{
   std::cout << "I'm in the operator >=\n";
   return not (*this < p);
}

bool personType::operator <= (const personType& p) const
{
   std::cout << "I'm in the operator <=\n";
   return *this < p || *this == p;
}

bool personType::operator > (const personType& p) const
{
   std::cout << "I'm in the operator >\n";
   return not (*this <= p);
}

personType::personType(const string& n,int m,int d, int y)
{
   setName(n);
   setMonth(m);
   setDay(d);
   setYear(y);
}

// personType::personType()
// {
// //    setName("");
// //    setMonth(0);
// //    setDay(0);
// //    setYear(0);
// }

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


