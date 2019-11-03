#include "squareType.h"

// this uses an initializer list
// this is preferred method because the base class constructor
// executes before the derived class constructor
squareType::squareType(double side) : rectangleType(side,side)
{ }

/*
// this will also work because the rectangle has a default constructor
squareType::squareType(double side)
{
   setDimension(side);
}
*/

void squareType::setDimension(double side)
{
   // must use scope resolution
   rectangleType::setDimension(side,side);
}

double squareType::getSide() const
{
   return getLength();
}


