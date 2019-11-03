#include "personType.h"

void sort(personType people[], int n)
{
   personType temp;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (people[j].name< people[small].name)
            small=j;
      temp = people[i];         // put smallest in proper position
      people[i] = people[small];
      people[small] = temp;
   }
}

