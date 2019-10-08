#include <iostream>
using namespace std;
int main()
{
    int bigger,smaller;
    
    cin >> bigger >> smaller;
    if (smaller > bigger)
    {
        int temp=smaller
        smaller=bigger;
        bigger=temp;
    }
    cout << "smaller: " << smaller << endl;
    cout << "bigger:  " << bigger << endl;
    return 0;
}
