// Creating a program to illustrate the formatting of the output values using both manipulators and ios functions in C++ with CodeBlocks
// Chapter 10 Page no.279

// Preprocessor Directives
#include <iostream>
#include <iomanip>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the formatting of the output values using both manipulators and ios functions in C++ with CodeBlocks\n" << endl;

    // showpoint shows trailing decimal point and zeroes
    cout.setf(ios::showpoint);

    // The column headings
    cout << setw(5) << "Number"
        << setw(15) << "Inverse of Number"
        << setw(15) << "Sum of terms" << endl << endl;

    double term, sum = 0;

    for (int number = 1; number <= 10; number++)
    {
        term = 1.0 / float(number);
        sum += term;

        cout << setw(5) << number
            << setw(15) << setprecision(4)
            << setiosflags(ios::scientific) << term
            << setw(13) << resetiosflags(ios::scientific)
            << sum << endl;
    }

    return 0;
}
