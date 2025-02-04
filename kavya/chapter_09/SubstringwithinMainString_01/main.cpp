// Creating a program to demonstrate on how to search a substring within a main string in C++ with CodeBlocks
// Chapter 09 Page no.232

// Preprocessor Directives
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate on how to search a substring within a main string in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    int outer_counter, inner_counter;
    char character_string[] = "\nC++ is better than C";
    int length = strlen(character_string);
    char *sub_string = new char[length];
    cout << "The main string is: " << character_string;
    cout << "\n\nEnter the substring to be searched: ";
    cin >> sub_string;
    int string_size, length2 = strlen(sub_string);

    // Initiating the loop
    for(outer_counter = 0; outer_counter < length; outer_counter++)
    {
        string_size = outer_counter;
        for (inner_counter = 0; inner_counter < length2; inner_counter++)
        {
            if (character_string[string_size] == sub_string[outer_counter])
            {
                if (inner_counter == length2 - 1)
                {
                    cout << "\nThe substring is present in the string" << endl;
                    getch();
                    exit(0);
                }
                string_size++;
            }
            else
                break;
        }
    }
    if (outer_counter == length)
    {
        cout << "\nThe substring is not present in the main string" << endl;
    }

    return 0;
}
