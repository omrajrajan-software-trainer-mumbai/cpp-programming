// Creating a program to demonstrate Manual Garbage Collection using new and delete operator in C++ with CodeBlocks
// Chapter 03 Page no.48

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate Manual Garbage Collection \nusing new and delete operator in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int *one_d_array;
    int size;

    // Getting input from the user using 'cin'
    cout << "Enter the size of integer array: ";
    cin >> size;

    // Creating an array of the the user provided size
    cout << "\nCreating an array of size " << size << "..\n";
    one_d_array = new int[size];

    cout << "\nDynamic allocation of memory for array one_d_array is successful\n";

    // Deleting the array using the delete keyword
    delete one_d_array;

    return 0;
}
