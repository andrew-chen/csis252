/*
The purpose of this program is to allow you to experiment with inputting
different types of data. Modify the cin statement to try different types.

>> is the extraction operator used with an input stream. It does the following
   * it will first skip any whitespace
   * it will then read according to the type of the variable and stop either at 
     a character not of the data type or at whitespace
       - note that using >> to input a string will stop at whitespace
       - to input an entire line into a string, use: getline(cin,str);
       - to input the next char no matter what (even whitespace), 
         use: cin.get(ch);
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i1,i2,i3;
   char c1,c2,c3;
   double d1,d2,d3;
   string s1,s2,s3;

   cin >> i1 >> c1 >> d1 >> s1;

//    getline(cin,s2);
//    cin.get(c2);
//    cin.get(c3);

   cout << "i1 = " << i1 << endl;
   cout << "i2 = " << i2 << endl;
   cout << "i3 = " << i3 << endl;
   cout << "c1 = '" << c1 << "'" << endl;
   cout << "c2 = '" << c2 << "'" << endl;
   cout << "c3 = '" << c3 << "'" << endl;
   cout << "d1 = " << d1 << endl;
   cout << "d2 = " << d2 << endl;
   cout << "d3 = " << d3 << endl;
   cout << "s1 = \"" << s1 << "\"" << endl;
   cout << "s2 = \"" << s2 << "\"" << endl;
   cout << "s3 = \"" << s3 << "\"" << endl;
   return 0;
}
