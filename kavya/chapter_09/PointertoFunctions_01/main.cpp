// Creating a program to demonstrate an example on how pointers can be used as functions in C++ with CodeBlocks
// Chapter 09 Page no.233

// Preprocessor Directives
#include <iostream>

using namespace std;

// Function Declaration
typedef void (*Fun_pointer)(int, int);

// Defining an function named add
void add(int number_1, int number_2)
{
    cout << number_1 << " + " << number_2 << " = " << number_1 + number_2;
}

// Defining an function named subtract
void subtract(int number_1, int number_2)
{
    cout << number_1 << " - " << number_2 << " = " << number_1 - number_2;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example on how pointers can be used as functions in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    Fun_pointer pointer;
    // Storing the address of the add() in the pointer
    pointer = &add;
    // Calling the function using the pointer
    pointer(1, 2);
    cout << endl;
    // Storing the address of the subtract() in the pointer
    pointer = &subtract;
    // Calling the function using the pointer
    pointer(3, 2);
    cout << endl;

    return 0;
}
