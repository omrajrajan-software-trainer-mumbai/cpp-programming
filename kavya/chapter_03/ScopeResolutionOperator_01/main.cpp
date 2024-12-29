// Creating a program to demonstrate the use of scope resolution operator in C++ with CodeBlocks
// Chapter 03 Page no.44

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a global variable
int global_variable = 10;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of scope resolution operator in C++ with CodeBlocks\n" << endl;

    // Redeclaring the variable global_variable, local to main
    int global_variable = 20;

    // Creating a block within the main()
    {
        int second_variable = global_variable;
        // Declaring global_variable again local to inner block
        int global_variable = 30;

        // Displaying the inner block
        cout << "We are in inner block\n";
        cout << "second_variable =" << second_variable << "\n";
        cout << "global_variable =" << global_variable << "\n";
        cout << "::global_variable = " << ::global_variable << "\n";
    }
    // Displaying the outer block
    cout << "\nWe are in outer block\n";
    cout << "global_variable =" << global_variable << "\n";
    cout << "::global_variable = " << ::global_variable << "\n";

    return 0;
}
