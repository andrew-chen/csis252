// The purpose of this program is to show the structure of a
// C++ program and provide descriptions.

// C++ is strongly typed.  Identifiers must be declared before
// they are used and given a type that cannot change.  Identifiers
// are names of things, such as variables, contants, functions, etc.

// First come preprocessor directives.
// These two lines should be put at the top of each file that
// uses keyboard input and screen output.  Other includes are
// used when necessary to access other libraries.
#include <iostream>  // for using common input and common output
using namespace std;

#include <iomanip>   // for formatting output

// These are constants. They cannot change. Advantages
// 1. Constants enhance readability of a program by assigning
//    a name to a value.
// 2. Constants make changes easier and less error prone.
// Constants are typically declared outside of functions.
const double A_min = 90.0; // minimum pct for an A grade
const double B_min = 80.0; // minimum pct for an B grade
const double C_min = 70.0; // minimum pct for an C grade
const double D_min = 60.0; // minimum pct for an D grade

int main() // main is a required function
{ // this is the start of a program block
// These are variables.  They can change.
// Variables should be declared at the top of functions.
// The initial values of variables are garbage.
   int score;     // score to be input
   int maxScore;  // the maximum score to be input
   double pct;    // calculated percentage

   cout << fixed << showpoint << setprecision(2); // format to 2 decimals
   
// C++ is free format.  Semicolons end C++ statements
   
// << is called the insertion operator, insert into the output stream.
// Every value output needs the << operator.
   cout << "enter maximum test score: ";
// >> is called the extraction operator, extract from the input stream
// Every value input needs the >> operator.
   cin >> maxScore;
   cout << "enter student test score: ";
   cin >> score;
// An int divided by an int results in an int. Therefore we must change the
// data type of one of the ints to a floating point so that the result is
// a floating point value.  static_cast is how changing a data type is done
// in C++.
   pct = static_cast<double>(score) / maxScore * 100;
   cout << "you achieved " 
        << pct 
        << "%\n";
   cout << "Grade Range\n";
   cout << "   A >= " << A_min << endl;
   cout << "   B >= " << B_min << endl;
   cout << "   C >= " << C_min << endl;
   cout << "   D >= " << D_min << endl;
   cout << "   F <  " << D_min << endl;

   /*
   cout << pct << endl;
   cout << pct << "\n";
   cout << pct << '\n';
   */
   
   return 0;  // the main function type is int, so return an int
}  // end of the program block
   
