// Creating a program to demonstrate of Pointer Manipulation in C++ with CodeBlocks
// Chapter 09 Page no.225

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate of Pointer Manipulation in C++ with CodeBlocks" << endl << endl;

    // Variable, Pointer Declaration and Initialization
    int variable_1 = 10;
    int *pointer_variable;
    pointer_variable = &variable_1;

    cout << "The value of variable_1 is " << *pointer_variable;
    *pointer_variable = *pointer_variable + variable_1;

    cout << "\n\nThe revised value of variable_1 is " << variable_1 << endl << endl;

    return 0;
}
