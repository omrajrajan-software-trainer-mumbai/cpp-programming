// Creating a program to demonstrate an example of default arguments in C++ with CodeBlocks
// Chapter 04 Page no.76

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of default arguments in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    float amount;

    // Declaring a function within the main()
    float value (float first_parameter, int integer_parameter, float default_parameter = 0.15);
    void printline (char symbol = '*', int length = 40);

    // Calling the function  and it uses the default values for arguement
    printline();

    // Calling the function and using the default value for the third parameter
    amount = value (5000.00, 5);
    cout << "\nFinal Value = " << amount << "\n\n";

    // Passing all the values explicitly
    amount = value (10000.00, 5,  0.30);
    cout << "\nFinal Value = " << amount << "\n\n";

    // Use default value for second argument
    printline ('=');

    return 0;
}

// Defining the functions
float value (float first_parameter, int integer_parameter, float default_parameter)
{
    int year = 1;
    float sum = first_parameter;

    while (year <= integer_parameter)
    {
        sum = sum * (1 + default_parameter);
        year++;
    }
    return (sum);
}
void printline (char symbol, int length)
{
    for(int loop_counter = 1; loop_counter <= length; loop_counter++)
    {
        cout << symbol;
    }
    cout << "\n";
}
