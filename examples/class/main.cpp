#include <fstream>
#include <iostream>
#include <string>
#include "constants.h"
#include "personType.h"
using namespace std;

void sort(personType[],int count);
void output(const personType[],int count);
void read(personType[],int& count);

int main()
{
   personType people[arraysize];
   int count;

   read(people,count);
   sort(people,count);
   output(people,count);
//    personType p1;
//    personType p2("John Doe");
//    personType p3("John Doe",3,12,1992);
   
   return 0;
}

