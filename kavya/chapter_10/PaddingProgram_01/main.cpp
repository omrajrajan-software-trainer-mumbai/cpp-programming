// Creating a program to illustrate the functionality of padding with fill() in C++ with CodeBlocks
// Chapter 10 Page no.272

// Preprocessor Directives
#include <iostream>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the functionality of padding with fill() in C++ with CodeBlocks\n" << endl;

    cout.fill('<');
    cout.precision(3);

    for (int loop_counter = 1; loop_counter <= 6; loop_counter++)
    {
        // Prints the '<' character
        cout.width(5);
        cout << loop_counter;
        cout.width(10);
        cout << 1.0/ float(loop_counter) << endl;
        if (loop_counter == 3)
        {
            // Prints the '>' character
            cout.fill('>');
        }
    }
    cout << "\nPadding Changed" << endl << endl;
    // Prints the '#' character
    cout.fill('#');
    cout.width(15);
    cout << 12.345678 << endl;

    return 0;
}
