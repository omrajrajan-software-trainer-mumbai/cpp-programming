// Creating a program to illustrate how write() method displays a string in C++ with CodeBlocks
// Chapter 10 Page no.

// Preprocessor Directives
#include <iostream>
#include <string.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate how write() method displays a string in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    char *string_1 = "C++";
    char *string_2 = "Programming";
    int length_of_string_1 = strlen(string_1);
    int length_of_string_2 = strlen(string_2);

    // Using the for for loop to print a side triangle of string_2
    // The number of alphabets keep on increasing
    for(int loop_counter = 1; loop_counter < length_of_string_2; loop_counter++)
    {
        cout.write(string_2, loop_counter);
        cout << endl;
    }

    // The first loop prints the whole word and the number of alphabets in the string keep on decreasing
    for(int loop_counter = length_of_string_2; loop_counter > 0; loop_counter--)
    {
        cout.write(string_2, loop_counter);
        cout << endl;
    }

    // Concatenating Strings
    cout.write(string_1, length_of_string_1).write(string_2, length_of_string_2);
    cout << "\n";

    // Crossing the boundary
    // Only 10 letter will be printed
    cout.write(string_1, 10);

    cout << "\n";

    return 0;
}
