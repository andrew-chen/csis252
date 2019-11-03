#include "prototypes.h"
#include "constants.h"
#include "personType.h"

int main()
{
   personType people[arraymax];
   int count;

   input(people,count);
   sort(people,count);
   output(people,count);

   return 0;
}
