#include <iostream>
using namespace std;

const int arraysize=10;
const int sentinel=-1;

// the compiler doesn't care about the size of the array
// if you give it a size, the compiler ignores it
void output(const int array[],int n)
{
   for (int i=0; i<n; i++)
      cout << array[i] << ' ';
   cout << endl;
}

int biggest(const int numbers[],int count)
{
   // precondition: there is at least 1 value in the array
   int biggest=numbers[0];
   for (int i=1; i<count; i++)
      if (numbers[i]>biggest)
         biggest=numbers[i];
   return biggest;
}

// preconditions: none
void read(int numbers[],int& count)
{
   int num;
   count=0;
   cout << "enter ints, " << sentinel << " to quit\n";
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count++] = num;
      cin >> num;
   }
}
   
int main()
{
   int numbers[arraysize];
   int count;

   read(numbers,count);
   cout << "the array: ";
   output(numbers,count);
   cout << "the biggest is " << biggest(numbers,count)  << endl;

   return 0;
}
