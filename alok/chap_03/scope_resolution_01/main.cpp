// Creating a program to demonstrate the use of scope resolution operator in C++ with CodeBlocks
// Chapter 03 Page no.28

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a global variable
int temporary_variable = 10;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of scope resolution operator in C++ with CodeBlocks\n" << endl;

    // Redeclaring the variable temporary_variable, local to main
    int temporary_variable = 20;

    // Creating a block within the main()
    {
        int second_variable = temporary_variable;
        // Declaring temporary_variable again local to inner block
        int temporary_variable = 30;

        // Displaying the inner block
        cout << "We are in inner block\n";
        cout << "second_variable =" << second_variable << "\n";
        cout << "temporary_variable =" << temporary_variable << "\n";
        cout << "::temporary_variable = " << ::temporary_variable << "\n";
    }
    // Displaying the outer block
    cout << "\nWe are in outer block\n";
    cout << "temporary_variable =" << temporary_variable << "\n";
    cout << "::temporary_variable = " << ::temporary_variable << "\n";

    return 0;
}
