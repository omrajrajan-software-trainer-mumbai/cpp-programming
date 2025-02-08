// Creating a program to demonstrate an example of how arithmetic operations occur through pointers in C++ with CodeBlocks
// Chapter 09 Page no.09

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of how arithmetic operations occur through pointers in C++ with CodeBlocks\n" << endl;

    // Variable, Pointer Declaration and Initialization
    int numeric_array[] = {56, 75, 22, 18, 90};
    int *pointer_variable;
    int loop_counter;

    // Displaying the values of array
    cout << "The array values are: \n";
    for(loop_counter = 0; loop_counter < 5; loop_counter++)
    {
        cout << numeric_array[loop_counter] << "\n";
    }

    // Allocating the base address of numeric array to pointer_variable
    pointer_variable = numeric_array;

    // Printing the value in the array
    cout << "\nValue of pointer_variable : " << *pointer_variable;
    cout << "\n";

    pointer_variable++;
    cout << "\nValue of pointer_variable++ : " << *pointer_variable;
    cout << "\n";

    pointer_variable--;
    cout << "\nValue of pointer_variable-- : " << *pointer_variable;
    cout << "\n";

    pointer_variable += 2;
    cout << "\nValue of pointer_variable + 2 : " << *pointer_variable;
    cout << "\n";

    pointer_variable -= 1;
    cout << "\nValue of pointer_variable - 1 : " << *pointer_variable;
    cout << "\n";

    pointer_variable += 3;
    cout << "\nValue of pointer_variable += 3 : " << *pointer_variable;
    cout << "\n";

    pointer_variable -= 2;
    cout << "\nValue of pointer_variable -= 2 : " << *pointer_variable;
    cout << "\n";

    return 0;
}
