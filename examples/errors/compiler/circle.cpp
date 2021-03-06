// File:     circle.cpp
// Author:   Dan Brekke

// Description
// This file contains the implementation for a circle class

#include "circle.h"

Circle::Circle(double r)
{
   rad = r;
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return rad*2;
}

double Circle::area() const
{
   return PI*rad*rad;
}

double Circle::circumference() const
{
   return 2*PI*rad;
}
