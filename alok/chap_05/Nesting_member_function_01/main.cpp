// Creating a program to demonstrate an example of 'nesting of member functions' in C++ with CodeBlocks
// Chapter 05 Page no.97

// Preprocessor Directives
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Creating a class named binary
class binary
{
    // These fields cannot be accessed directly by the main() as they are private
    private:
        string number;
    // These fields or methods can be accessed directly by the main() as they are public
    public:
        // Defining a function read within a class
        void read(void)
        {
            cout << "Enter a binary number: ";
            cin >> number;
        }
        // Defining another function check_binary within the class
        void check_binary(void)
        {
            // Creating a for loop
            for(int loop_counter = 0; loop_counter <= number.length(); loop_counter++)
            {
                // Checking the condition using if statement
                if(number.at(loop_counter) != '0' && number.at(loop_counter) != '1')
                {
                    cout << "Incorrect binary number format...the program will quit";
                    getch();
                    exit(0);
                }
            }
        }
        // Defining another function ones within the class
        void ones(void)
        {
            // Calling the member function check_binary
            check_binary();
            for(int loop_counter = 0; loop_counter <= number.length(); loop_counter++)
            {
                if (number.at(loop_counter) == '0')
                {
                    number.at(loop_counter) != '1';
                }
                else
                {
                    number.at(loop_counter) = '0';
                }
            }
        }
        // Defining another function display_ones within the class
        void display_ones(void)
        {
            // Calling the member function ones
            ones();
        }
}

// The application starts with the main() function
int main()
{
    cout << "Creating a program to demonstrate an example of 'nesting of member functions' in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    return 0;
}
