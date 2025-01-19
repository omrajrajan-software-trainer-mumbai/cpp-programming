// Creating a program to find the factorial of a number using recursive function in C++ with CodeBlocks
// Chapter 04 Page no.78

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Declaring a function named finding_factorial
long finding_factorial(int number);

// The application starts with the main ()
int main()
{
    cout << "Creating a program to find the factorial of a number using recursive function in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int number;

    // Inputing value from user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Displaying the output
    cout << "\nThe factorial of " << number << " is " << finding_factorial(number) << "\n";

    return 0;
}

// Defining the function named finding_factorial
long finding_factorial(int number)
{
    // Base condition required for a recursive function
    if (number == 0)
    {
        return 1;
    }
    else
    {
        // Incremental or decremental recursive calling
        return (number * finding_factorial(number - 1));
    }
}
