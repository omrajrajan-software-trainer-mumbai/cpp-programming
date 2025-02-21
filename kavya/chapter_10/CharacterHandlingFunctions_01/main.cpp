// Creating a program to illustrates the use of character handling functions in C++ with CodeBlocks
// Chapter 10 Page no.262

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrates the use of character handling functions in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int counter = 0;
    char character_variable;

    cout << "INPUT TEXT" << endl;
    cin.get(character_variable);

    // Loop works until the user presses enter
    while (character_variable != '\n')
    {
        // Displays the string inputted by the user
        cout.put(character_variable);
        // Increments the counter to get count of the characters inputted by user
        counter++;
        // Used to get the next character of the string
        cin.get(character_variable);
    }
    // Final display of the number of characters in the string
    cout << " \nNumber of characters = " << counter << endl;

    return 0;
}
