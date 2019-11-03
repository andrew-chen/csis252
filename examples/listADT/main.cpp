#include <fstream>
#include <iostream>
#include <string>
#include "personType.h"
#include "listType.h"
using namespace std;

void output(const listType<personType>&);
void read(listType<personType>&);

int main()
{
   listType<personType> people;

   read(people);
   output(people);

   return 0;
}


