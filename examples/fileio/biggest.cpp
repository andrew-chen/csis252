int biggest(const int numbers[],int count)
{
   // precondition: there is at least 1 value in the array
   int biggest=numbers[0];
   for (int i=1; i<count; i++)
      if (numbers[i]>biggest)
         biggest=numbers[i];
   return biggest;
}
