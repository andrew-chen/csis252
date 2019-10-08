#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int arraymax = 20;

struct personType
{
   string name;
   int month;
   int day;
   int year;
};

void sort(personType people[],int count);
void input(personType people[],int& count);
void output(const personType people[],int count);

int main()
{
   personType people[arraymax];
   int count;

   input(people,count);
   sort(people,count);
   output(people,count);

   return 0;
}

void input(personType people[], int& count)
{
   count = 0;
   ifstream f;
   f.open("people");
   string name;
   char tempch;
   getline(f,name);
   while (!f.eof() && count < arraymax)
   {
      people[count].name = name;
      f >> people[count].month; 
      f >> tempch;
//      f.ignore(80,'/');
      f >> people[count].day; 
      f >> tempch;
      f >> people[count].year; 
      count++;
      f.ignore(80,'\n');
      getline(f,name);
   }
   f.close();
      
}

void output(const personType people[], int count)
{
   ofstream out;
   out.open("result");
   for (int i=0; i<count; i++)
      out << left << setw(25) << people[i].name
          << people[i].month << '/' << people[i].day
          << '/' << people[i].year << endl;
   out.close();
}

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

