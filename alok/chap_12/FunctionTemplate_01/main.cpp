// Program to demonstrate how a template function is defined and implemented in C++ with CodeBlocks
// Chapter 12, Page No. 15

// Preprocessor directive - Includes the iostream library for standard input and output
#include <iostream>

using namespace std;

// Template function for swapping two values of any data type
template <class T>
void swapValues(T &x, T &y)  // Function definition using a template
{
    T temp = x;  // Temporary variable stores value of x
    x = y;       // Assign value of y to x
    y = temp;    // Assign stored value of x (temp) to y
}

// Function that demonstrates swapping of integer and float variables
void fun(int m, int n, float a, float b)
{
    cout << "m and n before swap: " << m << " " << n << "\n";
    swapValues(m, n);  // Calls the template function for integer swapping
    cout << "m and n after swap: " << m << " " << n << "\n";

    cout << "a and b before swap: " << a << " " << b << "\n";
    swapValues(a, b);  // Calls the template function for float swapping
    cout << "a and b after swap: " << a << " " << b << "\n";
}

// Main function - Program execution starts here
int main()
{
    int num1 = 100, num2 = 200;   // Declaring integer variables
    float num3 = 11.22, num4 = 33.44;  // Declaring float variables

    // Calling the function to perform swapping
    fun(num1, num2, num3, num4);

    return 0; // Return 0 to indicate successful execution
}
