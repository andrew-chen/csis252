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
   return getBirthday() < p.getBirthday();
}

bool personType::operator == (const personType& p) const
{
   std::cout << "I'm in the operator ==\n";
   return getBirthday() == p.getBirthday();
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

personType::personType(const string& n,const dateType& d)
{
   setName(n);
   setBirthday(d);
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

dateType personType::getBirthday() const
{
   return birthday;
}

void personType::setBirthday(const dateType& d)
{
   birthday = d;
}

