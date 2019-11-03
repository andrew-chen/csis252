#ifndef _SQUARETYPE_H_
#define _SQUARETYPE_H_
#include "rectangleType.h"

class squareType : public rectangleType
{
   public:
      squareType(double=0);
      void setDimension(double);
      double getSide() const;

   private:
};

#endif
