// Creating a program to demonstrate the use of two dimensional arrays in C++ with CodeBlocks
// Chapter 03 Page no.65

// Preprocessor Directives
#include <iostream>

using namespace std;

int main()
{
    cout << "Creating a program to demonstrate the use of two dimensional arrays in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int row_counter, column_counter;
    int number[3][4];

    // Initiating the outer loop
    for(row_counter = 0; row_counter < 3; ++row_counter)
    {
        // Initiating the inner loop
        for(column_counter = 0; column_counter < 4; ++column_counter)
        {
            number[row_counter][column_counter] = (row_counter * 4) + column_counter + 1;
        }
    }

    // Now printing them out
    for(row_counter = 0; row_counter < 3; ++row_counter)
    {
        // Initiating the inner loop
        for(column_counter = 0; column_counter < 4; ++column_counter)
        {
            cout <<  number[row_counter][column_counter] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
