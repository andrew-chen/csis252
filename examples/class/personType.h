#ifndef _PERSONTYPE_H_
#define _PERSONTYPE_H_

#include <string>
using namespace std;
class personType
{
   public:
      personType(const string&,int month,int day,int year);
      personType();
      personType(const string&);
      string getName() const;
      void setName(const string&);
      int getMonth() const;
      void setMonth(int);
      int getDay() const;
      void setDay(int);
      int getYear() const;
      void setYear(int);

   private:
      string name;
      int month;
      int day;
      int year;
};

#endif
