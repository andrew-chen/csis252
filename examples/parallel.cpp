#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int arraymax = 20;

void sort(string names[],int months[],int days[], int years[], 
           int count);
void input(string names[],int months[],int days[], int years[], 
           int& count);
void output(const string names[],const int months[],const int days[], 
            const int years[], int count);

int main()
{
   string names[arraymax];
   int months[arraymax];
   int days[arraymax];
   int years[arraymax];
   int count;

   input(names,months,days,years,count);
   sort(names,months,days,years,count);
   output(names,months,days,years,count);

   return 0;
}

void input(string names[],int months[],int days[], int years[], int& count)
{
   count = 0;
   ifstream f;
   f.open("people");
   string name;
   char tempch;
   getline(f,name);
   while (!f.eof() && count < arraymax)
   {
      names[count] = name;
      f >> months[count]; 
      f >> tempch;
//      f.ignore(80,'/');
      f >> days[count]; 
      f >> tempch;
      f >> years[count]; 
      count++;
      f.ignore(80,'\n');
      getline(f,name);
   }
   f.close();
      
}
void output(const string names[],const int months[],const int days[], 
            const int years[], int count)
{
   ofstream out;
   out.open("result");
   for (int i=0; i<count; i++)
      out << left << setw(25) << names[i] << right << months[i]
           << '/' << days[i] << '/' << years[i] << endl;
   out.close();
}

void sort(string names[],int months[],int days[], int years[], 
           int n)
{
   string temp;
   int m,d,y;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (names[j] < names[small])
            small=j;
      temp = names[i];         // put smallest in proper position
      names[i] = names[small];
      names[small] = temp;
      m = months[i];
      months[i] = months[small];
      months[small] = m;
      d = days[i];
      days[i] = days[small];
      days[small] = d;
      y = years[i];
      years[i] = years[small];
      years[small] = y;
   }
}

