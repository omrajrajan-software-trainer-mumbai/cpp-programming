// Program to demonstrate the functionality of width and precision manipulators in C++ with CodeBlocks
// chap 10  page no 24

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate the functionality of width and precision manipulators in C++ with CodeBlocks" << endl;

    float pi = 22.0 / 7.0;
    int loop_counter;
    cout << "Value of PI: " << endl;

    for(loop_counter = 1; loop_counter <= 10; loop_counter++)
    {
        cout.width(loop_counter + 1);
        cout.precision(loop_counter);
        cout << pi << endl;
    }
}
