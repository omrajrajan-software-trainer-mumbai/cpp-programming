// Creating a program to demonstrate the use of Manipulators in C++ with CodeBlocks
// Chapter 03 Page no.51

// Preprocessor Directives
#include <iostream>
// For using the setw()
#include <iomanip>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of Manipulators in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int basic = 950, allowance = 95, total = 1045;

    // Setting the size and displaying the variable
    cout << setw(10) << "Basic" << setw(10) << basic << endl;
    cout << setw(10) << "Allowance" << setw(10) << allowance << endl;
    cout << setw(10) << "Total" << setw(10) << total << endl;

    return 0;
}
