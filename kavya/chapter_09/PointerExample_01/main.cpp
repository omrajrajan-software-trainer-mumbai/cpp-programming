// Creating a program to demonstrate an example of Pointer in C++ with CodeBlocks
// Chapter 09 Page no.225

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Pointer in C++ with CodeBlocks\n" << endl;

    // Variable, Pointer Declaration and Initialization
    int first_variable, *first_pointer, **second_pointer;
    first_pointer = &first_variable;
    second_pointer = &first_pointer;

    cout << "Before incrementing the address values:\n";
    cout << "The address of the first_variable is " << first_pointer << "\n";
    cout << "The address of the first_pointer is " << second_pointer << "\n\n";

    cout << "After incrementing the address values:\n";
    first_pointer += 2;
    cout << "The address of the first_variable is " << first_pointer << "\n";
    second_pointer += 2;
    cout << "The address of the first_pointer is " << second_pointer << "\n\n";

    return 0;
}
