#include <iostream>
#include <iomanip>
#include "squareType.h"

using namespace std;

int main()
{
    squareType s;
    s.setDimension(4);
    cout << s.getSide() << endl;
    cout << s.area() << endl;
    squareType s2(5);
    cout << s2.getSide() << endl;
    cout << s2.area() << endl;
    return 0;
}
