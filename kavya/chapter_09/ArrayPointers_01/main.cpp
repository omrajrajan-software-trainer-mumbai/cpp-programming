// Creating a program to demonstrate an example of Pointer with arrays in C++ with CodeBlocks
// Chapter 09 Page no.229

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Pointer with arrays in C++ with CodeBlocks\n" << endl;

    // Variable, Pointer Declaration and Initialization
    int numeric_array[10] = {1, 99, 4, 37, 88, 3, 19, 45, 62, 87};
    int loop_counter, number, *pointer;

    // Assigning the base address of numeric_array to pointer
    pointer = numeric_array;
    cout << "Enter the element to be searched: ";
    cin >> number;

    // Initiating a loop to figure out of if the inputted number is present in the array
    for (loop_counter = 0; loop_counter < 10; loop_counter++)
    {
        // Using the if condition to verify if the inputted number is present in the array
        if(*pointer == number)
        {
            cout << "\n" << number << " is present in the array\n";
            // Using the break statement to abruptly break out of the loop
            break;
        }
        else if(loop_counter == 9)
        {
            cout << "\n" << number << " is not present in the array\n";
        }
        // Incrementing the pointer to make it point to the next array elememt
        pointer++;
    }

    return 0;
}
