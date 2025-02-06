// Program to demonstrate how to search a substring within a main string in C++
// Chapter 09 Page no. 232

#include <iostream>
#include <cstring>  // For strlen() and strcmp()
using namespace std;

int main()
{
    cout << "Creating a program to demonstrate how to search a substring within a main string in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    char character_string[] = "C++ is better than C";  // Main string
    int length_of_character_string = strlen(character_string);

    char sub_string[50];  // Buffer for user input

    // Display the main string
    cout << "The main string is: " << character_string;

    // Taking user input for substring
    cout << "\n\nEnter the substring to be searched: ";
    cin.getline(sub_string, 50);  // Using getline to allow spaces

    int length_of_substring = strlen(sub_string);

    // Searching for the substring in the main string
    bool found = false;

    for (int outer_loop_counter = 0; outer_loop_counter <= length_of_character_string - length_of_substring; outer_loop_counter++)
    {
        int inner_loop_counter;

        // Check if substring matches character by character
        for (inner_loop_counter = 0; inner_loop_counter < length_of_substring; inner_loop_counter++)
        {
            if (character_string[outer_loop_counter + inner_loop_counter] != sub_string[inner_loop_counter])
            {
                break;  // Stop inner loop if mismatch occurs
            }
        }

        // If all characters match, we have found the substring
        if (inner_loop_counter == length_of_substring)
        {
            found = true;
            break;
        }
    }

    // Display results
    if (found)
        cout << "\nThe substring is present in the string." << endl;
    else
        cout << "\nThe substring is not present in the main string." << endl;

    return 0;  // Proper program termination
}
