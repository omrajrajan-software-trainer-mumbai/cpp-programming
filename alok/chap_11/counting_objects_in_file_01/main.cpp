// Program to demonstrate counting of objects stored in a file in C++ with CodeBlocks
// Chapter 11, Page No. 31

// Preprocessor directives - These libraries provide functionalities for file handling and string operations.
#include <iostream>   // Required for standard input and output operations (cin, cout)
#include <fstream>    // Required for file handling operations (ifstream, ofstream, fstream)
#include <cstring>    // Required for string functions like strcpy()

using namespace std;

// Class definition for employee
class employee
{
private:
    char employee_name[30]; // Character array to store the name of the employee
    int employee_code;      // Integer to store employee code (unique identifier)

public:
    // Default constructor (used when no parameters are provided)
    employee() {}

    // Parameterized constructor to initialize an employee object
    employee(char *employee_name_temp, int employee_code_temp)
    {
        strcpy(employee_name, employee_name_temp); // Copy the given name to employee_name
        employee_code = employee_code_temp;       // Assign the employee code
    }
};

// Main function where program execution starts
int main()
{
    cout << "Program to demonstrate counting of objects stored in a file in C++ with CodeBlocks" << endl << endl;

    // Creating an array of employee objects
    employee employee_object[4] = {
        employee("Amit", 1),
        employee("Joy", 2),
        employee("Rahul", 3),
        employee("Vikas", 4)};

    // Step 1: File stream object creation
    fstream file_handler; // fstream is a class that supports both reading and writing from/to a file

    // Step 2: Opening a file in read-write mode with truncation
    file_handler.open("Employee.dat", ios::in | ios::out | ios::binary | ios::trunc);

    /*
        Explanation of file.open() parameters:
        - "Employee.dat": This is the filename where employee data will be stored.
        - ios::in: Opens the file for reading.
        - ios::out: Opens the file for writing.
        - ios::binary: Ensures that data is written in binary mode (raw memory format).
        - ios::trunc: Clears any existing content in the file before writing new data.
    */

    // Step 3: Checking if the file opened successfully
    if (!file_handler) // If file opening failed, display an error message and exit
    {
        cerr << "Error opening file!" << endl; // cerr is used for error messages
        return 1; // Return a non-zero value indicating an error
    }

    // Step 4: Writing objects to the file
    for (int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        file_handler.write((char *)&employee_object[loop_counter], sizeof(employee_object[loop_counter]));

        /*
            Explanation of file.write():
            - file.write() is used to write binary data into a file.
            - (char*)&employee_object[loop_counter]: This casts the employee object into a character pointer
              so it can be written in binary format.
            - sizeof(employee_object[loop_counter]): Specifies the number of bytes to write, ensuring
              the entire object is written correctly.
        */
    }

    // Step 5: Moving the file pointer to the end to determine file size
    file_handler.seekg(0, ios::end);

    /*
        Explanation of file.seekg():
        - seekg(offset, direction): Moves the file pointer to a specific location.
        - 0: No offset, meaning we move to the specified direction.
        - ios::end: Moves the file pointer to the end of the file.
        - Purpose: To determine the total size of the file, which helps in counting the number of objects.
    */

    // Step 6: Getting the file size (position of the pointer at the end)
    int end_of_file = file_handler.tellg();

    /*
        Explanation of file.tellg():
        - tellg() returns the current position of the file pointer.
        - Since we moved to the end using seekg(), tellg() now gives us the total size of the file in bytes.
    */

    // Step 7: Calculating and displaying the number of objects stored in the file
    cout << "Number of objects stored in Employee.dat is: " << end_of_file / sizeof(employee) << endl;

    /*
        Explanation:
        - end_of_file / sizeof(employee) calculates the number of objects stored.
        - Since each object takes a fixed number of bytes, dividing total bytes by object size gives count.
    */

    // Step 8: Closing the file (Important!)
    file_handler.close();

    /*
        Explanation of file.close():
        - Always close the file after all read/write operations.
        - This ensures that data is properly saved and file resources are freed.
    */

    return 0; // Indicating successful program execution
}
