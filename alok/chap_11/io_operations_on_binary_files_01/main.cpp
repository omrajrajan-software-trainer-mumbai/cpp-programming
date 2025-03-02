// Program to demonstrate input and output operations on binary files in C++ with CodeBlocks
// Chapter 11, Page No. 26

// Preprocessor directives - Required libraries for file handling and formatting
#include <iostream>   // For standard input and output operations (cout, cin)
#include <fstream>    // For file handling (ofstream, ifstream)
#include <iomanip>    // For output formatting (setw, setprecision)

using namespace std;

const char *filename = "BINARY.dat"; // Corrected filename with ".dat" extension for clarity

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate input and output operations on binary files in C++ with CodeBlocks\n" << endl;

    // Step 1: Writing data to a binary file
    float height[4] = {175.5, 153.0, 167.25, 160.70}; // Array of float values representing heights
    ofstream outfile; // Create an ofstream object for writing to a file

    outfile.open(filename, ios::binary | ios::out); // Open file in binary write mode

    /*
        Explanation of outfile.open():
        - filename: The name of the file where data is written ("BINARY.dat").
        - ios::binary: Opens the file in binary mode (ensures data is stored in raw format).
        - ios::out: Opens the file for output (writing).
    */

    if (!outfile) // Checking if the file opened successfully
    {
        cerr << "Error opening file for writing!" << endl; // Display error if file couldn't be opened
        return 1; // Exit the program with an error code
    }

    outfile.write(reinterpret_cast<char *>(height), sizeof(height)); // Writing binary data to file

    /*
        Explanation of outfile.write():
        - reinterpret_cast<char *>(height): Converts the float array into a char pointer for binary writing.
        - sizeof(height): Specifies the number of bytes to write (entire array).
        - This writes the array "height" as raw binary data into the file.
    */

    outfile.close(); // Close the output file

    /*
        Closing the file ensures that:
        - All data is saved properly.
        - The file stream is freed for further operations.
    */

    // Step 2: Resetting array to zero before reading from file
    for (int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        height[loop_counter] = 0; // Reset all elements to zero to ensure values are read from file
    }

    // Step 3: Reading data from a binary file
    ifstream infile; // Create an ifstream object for reading from a file
    infile.open(filename, ios::binary | ios::in); // Open file in binary read mode

    /*
        Explanation of infile.open():
        - filename: The name of the file ("BINARY.dat") from which data is read.
        - ios::binary: Opens the file in binary mode.
        - ios::in: Opens the file for input (reading).
    */

    if (!infile) // Checking if the file opened successfully
    {
        cerr << "Error opening file for reading!" << endl; // Display error if file couldn't be opened
        return 1; // Exit the program with an error code
    }

    infile.read(reinterpret_cast<char *>(height), sizeof(height)); // Reading binary data from file

    /*
        Explanation of infile.read():
        - reinterpret_cast<char *>(height): Converts the float array into a char pointer for binary reading.
        - sizeof(height): Specifies the number of bytes to read (entire array).
        - This reads binary data from the file into the array "height".
    */

    infile.close(); // Close the input file

    // Step 4: Displaying the read data
    cout << "Heights read from file:" << endl;

    for (int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        cout.setf(ios::showpoint); // Ensures decimal points are shown
        cout << setw(10) << setprecision(2) << fixed << height[loop_counter] << endl;
    }

    /*
        Explanation of output formatting:
        - setf(ios::showpoint): Ensures decimal points are displayed for floating-point numbers.
        - setw(10): Sets a width of 10 characters for each number.
        - setprecision(2): Sets the number of digits after the decimal point to 2.
        - fixed: Ensures that the output is in fixed-point notation (not scientific notation).
    */

    return 0; // Indicating successful program execution
}
