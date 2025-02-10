// Creating a program to demonstrate an example of arrays of Pointer in C++ with CodeBlocks
// Chapter 09 Page no.230

// Preprocessor Directives
#include <iostream>
// For strcmp()
#include <cstring>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of arrays of Pointer in C++ with CodeBlocks\n" << endl;

    // Variable, Pointer Declaration and Initialization
    int loop_counter = 0;
    // Array of pointers to string
    char *array_pointer[4] =
    {
        "books",
        "television",
        "computer",
        "sports",
    };

    char string_to_search[25];

    cout << "Enter your favorite leisure pursuit: ";

    // Using the getline to prevent overflow
    cin.getline(string_to_search, 25);

    for (loop_counter = 0; loop_counter < 10; loop_counter++)
    {
        // Removed unnecessary dereferencing
        if (!strcmp(string_to_search, array_pointer[loop_counter]))
        {
            cout << endl << "Your favorite pursuit is available here." << endl;
            break;
        }
    }
    if (loop_counter == 4)
    {
        cout << endl << "Your favorite pursuit is not available here." << endl;
    }

    return 0;
}
