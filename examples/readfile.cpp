#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   ifstream f;
   f.open("names");
   string name;
   int age;
   int count=0;
   getline(f,name);
   while (!f.eof())
   {
      f >> age;
      count++;
      cout << setw(4) << count << ". " << name << ' ' << age << endl;
      // ignore 80 chars or end of line, whichever comes first
      f.ignore(80,'\n');
      getline(f,name);
   }
   f.close();
   return 0;
}
