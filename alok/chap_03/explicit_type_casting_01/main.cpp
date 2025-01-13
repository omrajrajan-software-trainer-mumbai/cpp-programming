// Creating a program to demonstrate Explicit type casting in C++ with CodeBlocks
// Chapter 03 Page no.41

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate Explicit type casting in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int integer_variable = 25;
    float float_variable = 35.87;

    // Printing the value before typecasting
    cout << "integer_variable = " << integer_variable;
    cout << "\n\nfloat_variable = " << float_variable;

    // Displaying the value after typecasting
    cout << "\n\nfloat(integer_variable) = " << float(integer_variable);
    cout << "\n\nint(float_variable) = " << int(float_variable) << "\n";

    return 0;

}
