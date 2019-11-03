#include <fstream> // #1 include fstream
#include <iomanip>
using namespace std;

void output(ofstream& o,const int array[],int n)
{
   for (int i=0; i<n; i++)
      o << setw(10) << array[i] << endl;  // #4 use the file
}
