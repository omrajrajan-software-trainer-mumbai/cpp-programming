// Creating a program to illustrate the functionality of manipulators in C++ with CodeBlocks
// Chapter 10 Page no.271

// Preprocessor Directives
#include <iostream>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the functionality of manipulators in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    float pi_value = 22.0/ 7.0;
    int loop_counter;
    cout << "Value of PI:" << endl;
    for (loop_counter = 2; loop_counter <= 11; loop_counter++)
    {
        // The width increases on every loop
        cout.width(loop_counter + 1);
        // The digits keeps increasing on every loop
        cout.precision(loop_counter);
        // Displays the PI value
        cout << pi_value << endl;
    }

    return 0;
}
