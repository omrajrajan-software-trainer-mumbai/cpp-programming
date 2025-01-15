// Creating a program to demonstrate the use of Math function in C++ with CodeBlocks
// Chapter 04 Page no.82

// Preprocessor Directives
#include <iostream>
#include <conio.h>
#include <iomanip>
// Using the header file math.h to access the math library functions
#include <math.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of Math function in C++ with CodeBlocks\n" << endl;

    cout << fixed << setprecision(2);
    // Computing the sine value
    cout << "sin (100) = " << sin(100.00) << "\n";
    // Computing the cosine value
    cout << "cos (100) = " << cos(100.00) << "\n";
    // Computing the tangent value
    cout << "tan (100) = " << tan(100.00) << "\n";
    // Computing power of one value raised to the other
    cout << "7 to the power of 6 = " << pow(7.0, 6.0) << "\n";
    // Computing log to the base of 10 value
    cout << "log10 (10) = " << log10(10.00) << "\n";
    // Computing the square root of a value
    cout << "Square root of 2 = " << sqrt(2) << "\n";

    return 0;
}
