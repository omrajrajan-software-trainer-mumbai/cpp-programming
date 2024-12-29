// Creating a program to create and guess a random number using the rand() in C++ with CodeBlocks
// Chapter 03 Page no.65

// Preprocessor Directives
#include <iostream>

using namespace std;

int main()
{
    cout << "Creating a program to create and guess a random number using the rand() in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int magic;
    int guess;

    // Generating the magic number
    magic = rand();

    cout << "Guess the magic number:";
    cin >> guess;

    // Using the if condition to verify if the user input is same as the magic number
    if(guess == magic)
    {
        cout << "\n**Right**\n\n";
        cout << magic << " is the magic number\n";
    }
    else
    {
        guess > magic ? cout << "\nHigh\n" : cout << "\nLow\n";
    }
    return 0;
}
