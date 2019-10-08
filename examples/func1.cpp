#include <iostream>
#include <string>
using namespace std;

void greeting()
{
   cout << "hello there\n";
}

// name is a formal parameter, we must give it a type
void greeting2(string name)
{
   cout << "hello there " << name << endl;
}

int main()
{
   string name="John Doe";
   greeting();
   greeting2(name); // name is the actual parameter, 
                    // there is no reference to type in function call
   return 0;
}
