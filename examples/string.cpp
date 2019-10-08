#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   s = "This is a sentence.";
   cout << s << endl;
   for (int i=0; i<s.size(); i++)
      cout << s.at(i) << endl;
   s.append(" This is the next sentence.");
   cout << s << endl;

   return 0;
}
