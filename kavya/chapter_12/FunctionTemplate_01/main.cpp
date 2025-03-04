// Creating a program to demonstrate how a template function is defined and implemented in C++ with CodeBlocks
// Chapter 12 Page no.327

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a function template with place-holder and decorator
template <class T>
void swap_values(T &first_variable, T &second_variable)
{
    // The function body
    T temporary_variable = first_variable;
    first_variable = second_variable;
    second_variable = temporary_variable;
}

void swap_function(int integer_variable_1, int integer_variable_2, float float_variable_1, float float_variable_2)
{
    cout << "Integer Variables before swap : " << integer_variable_1 << " " << integer_variable_2 << endl;
    swap_values(integer_variable_1, integer_variable_2);
    cout << "Integer Variables after swap : " << integer_variable_1 << " " << integer_variable_2 << endl;

    cout << "Float Variables before swap : " << float_variable_1 << " " << float_variable_2 << endl;
    swap_values(float_variable_1, float_variable_2);
    cout << "Float Variables after swap : " << float_variable_1 << " " << float_variable_2 << endl;

}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate how a template function is defined and implemented in C++ with CodeBlocks\n" << endl;

    // Calling the swap function and passing arguments of both types
    swap_function(100, 200, 11.22, 33.44);

    return 0;
}
