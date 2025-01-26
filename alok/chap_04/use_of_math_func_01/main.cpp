// Creating a program to  demonstrates the use of math functions in C++ with CodeBlocks
// Chapter 04 Page no.23

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;

// Application starts with the main() fuction
int main( )
{
    cout << "Creating a program to  demonstrates the use of math functions in C++ with CodeBlocks" << endl << endl;
    cout << fixed << setprecision(2);
    cout << "sin (100) - " << sin(100.00) << endl;
    cout << "cos (100) - " << cos(100.00) << endl;
    cout << "tan (100) - " << tan(100.00) << endl;
    cout << "7 to the power of 6 - " << pow(7.0,6.0) << endl;
    cout << "log10 (10) - " << log10(10.00) << endl;
    cout << "sqrt (2) - " << sqrt(2.00) << endl;

    getch( );
    return 0;
}
