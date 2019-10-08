#include <iostream>
#include <iomanip>
using namespace std;
const double A_min = 90.0; // minimum pct for an A grade
const double B_min = 80.0; // minimum pct for an B grade
const double C_min = 70.0; // minimum pct for an C grade
const double D_min = 60.0; // minimum pct for an D grade

int main()
{
   int score;     // score to be input
   int maxScore;  // the maximum score to be input
   double pct;    // calculated percentage

   cout << fixed << showpoint << setprecision(2); // format to 2 decimals
   
   cout << "enter maximum test score: ";
   cin >> maxScore;
   cout << "enter student test score: ";
   cin >> score;
   pct = score / maxScore * 100;
   cout << "you achieved " << pct << "%\n";
   cout << "Grade Range\n";
   cout << "   A >= " << A_min << endl;
   cout << "   B >= " << B_min << endl;
   cout << "   C >= " << C_min << endl;
   cout << "   D >= " << D_min << endl;
   
   return 0;
}  
   
