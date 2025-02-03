// Program to demonstrate arrays of pointers in C++ with CodeBlocks
// Chap 09  Page no 14

#include <iostream>
// For strcmp()
#include <cstring>

using namespace std;

int main()
{
    int loop_counter = 0;

    // Array of pointers to strings
    char *array_pointer[4] =
    {
        "books",
        "television",
        "computers and tech",
        "sports"
    };

    char string_to_search[25];

    cout << "Enter your favorite leisure pursuit: ";

    // Using getline() to prevent overflow
    cin.getline(string_to_search, 25);

    for (loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        // Removed unnecessary dereferencing
        if (!strcmp(string_to_search, array_pointer[loop_counter]))
        {
            cout << endl << "Your favorite pursuit is available here at position "<< loop_counter + 1 << endl;
            break;
        }
    }
    if (loop_counter == 4)
        cout << endl << "Your favorite pursuit is not available here." << endl;

    // Using standard return statement instead of getch()
    return 0;
}
