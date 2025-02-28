// Creating a program that demonstrate how input and output operations occur on characters in C++ with CodeBlocks
// Chapter 11 Page no.299

// Preprocessor Directives
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program that demonstrate how input and output operations occur on characters in C++ with CodeBlocks\n" << endl;

    char character_string[80];
    cout << "Enter a string: ";
    cin >> character_string;

    int length = strlen(character_string);

    // Input and output stream
    fstream file_handler;

    cout << "\nOpening the 'TEXT' file and storing the string in it.\n" << endl;
    file_handler.open("TEXT.exe", ios::in | ios::out);

    for(int loop_counter = 0; loop_counter < length; loop_counter++)
    {
        // Put a character to file
        file_handler.put(character_string[loop_counter]);
    }
    // Goes to start
    file_handler.seekg(0);

    char character;
    cout << "Reading the file contents: ";
    while (file_handler)
    {
        // Get a character from file
        file_handler.get(character);
        // Display it on screen
        cout << character;
    }
    cout << endl;

    return 0;
}
