#ifndef _PERSONTYPE_H_
#define _PERSONTYPE_H_

#include <string>
#include "dateType.h"
using namespace std;
class personType
{
   public:
      personType(const string&,const dateType&);
      personType(const string& ="");
      string getName() const;
      void setName(const string&);
      dateType getBirthday() const;
      void setBirthday(const dateType&);
      bool operator < (const personType&) const;
      bool operator == (const personType&) const;
      bool operator != (const personType&) const;
      bool operator <= (const personType&) const;
      bool operator > (const personType&) const;
      bool operator >= (const personType&) const;

   private:
      string name;
      dateType birthday;
};

ostream& operator << (ostream&,const personType&);
istream& operator >> (istream&,personType&);

#endif
