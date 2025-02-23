// Creating a program to illustrate the creation and use of the user-defined manipulators in C++ with CodeBlocks
// Chapter 10 Page no.280

// Preprocessor Directives
#include <iostream>
#include <iomanip>

using namespace std;

// User Defined manipulators
ostream & currency(ostream & output)
{
    output << "Rs";
    return output;
}
ostream & form(ostream & output)
{
    // showpoint and showpos flags do not have bit fields
    // Hence used as single arguments
    // showpos prints '+' before positive numbers
    output.setf(ios::showpos);
    // showpoint shows trailing decimal point and zeroes
    output.setf(ios::showpoint);
    // fill() is used to fill the unused positions  by any desired character
    output.fill('*');
    // Only 2 digits will be displayed after the decimal point
    output.precision(2);
    output << setiosflags(ios::fixed) << setw(10);
    return output;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the creation and use of the user-defined manipulators in C++ with CodeBlocks\n" << endl;

    cout << currency << form << 7864.5 << endl;

    return 0;
}
