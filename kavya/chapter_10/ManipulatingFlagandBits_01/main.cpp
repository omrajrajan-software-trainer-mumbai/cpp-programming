// Creating a program to demonstrate the manipulation of flag and bit fields for setf() function in C++ with CodeBlocks
// Chapter 10 Page no.274

// Preprocessor Directives
#include <iostream>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the manipulation of flag and bit fields for setf() function in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Declaration
    int number;
    // Getting input from user
    cout << "Enter an integer value: ";
    cin >> number;

    cout << "The hexadecimal, octal and decimal representation of " << number << " is ";

    // Hexadecimal Base
    cout.setf(ios::hex, ios::basefield);
    cout << number << ", ";
    // Octal Base
    cout.setf(ios::oct, ios::basefield);
    cout << number << " and ";
    // Decimal Base
    cout.setf(ios::dec, ios::basefield);
    cout << number << " respectively" << endl;

    return 0;
}
