// Creating a program to illustrates the use of width() and precision() in C++ with CodeBlocks
// Chapter 10 Page no.270

// Preprocessor Directives
#include <iostream>
#include <cmath>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrates the use of width() and precision() in C++ with CodeBlocks\n" << endl;

    cout << "Precision set to 3 digits\n" << endl;
    cout.precision(3);
    // Setting the width of column names
    cout.width(10);
    cout << "VALUE";
    cout.width(15);
    cout << "SQUARE ROOT" << endl;

    for (int loop_counter = 1; loop_counter <= 5; loop_counter++)
    {
        // Setting the width of the data within the column headings
        // for proper allignment
        cout.width(10);
        cout << loop_counter;
        cout.width(15);
        cout << sqrt(loop_counter) << endl;
    }

    cout << "\nPrecision set to 5 digits\n" << endl;
    // Changing the precision parameter
    cout.precision(5);
    cout << "Square root of 10 is " << sqrt(10.00) << endl << endl;

    // Precision parameter set to default
    cout.precision(0);
    cout << "Square root of 10 is " << (float)sqrt(10.00) << " (default setting) " << endl;

    return 0;
}
