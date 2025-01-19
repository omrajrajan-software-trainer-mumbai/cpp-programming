// Creating a program to demonstrate the use of inline functions in C++ with CodeBlocks
// Chapter 04 Page no.11

// Preprocessor Directives
#include <iostream>

using namespace std;

// Defining an inline function named multiply
inline float multiply (float first_parameter, float second_parameter)
{
    return first_parameter * second_parameter;
}

// Defining an inline function named divide
inline float divide (float first_parameter, float second_parameter)
{
    return first_parameter / second_parameter;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of inline functions in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    float first_value = 12.345;
    float second_value = 9.82;

    // Displaying the output
    cout << "The product of both the values are "<< multiply(first_value, second_value) << "\n";
    cout << "The remainder of both the values are "<< divide(first_value, second_value) << "\n";

    return 0;
}
