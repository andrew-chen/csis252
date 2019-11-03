// File:     main.cpp
// Author:   Dan Brekke

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

void func();

int main()
{
   cout << showpoint << fixed << setprecision(2);
   float r;
   Circle c2(4);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c2.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c2.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c2.circumference() << endl;
   cout << endl;

   func();

   return 0;
}
