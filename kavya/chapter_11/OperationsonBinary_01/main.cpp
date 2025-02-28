// Creating a program that illustrates how binary format is more accurate in C++ with CodeBlocks
// Chapter 11 Page no.301

// Preprocessor Directives
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char *filename = "BINARY.exe";

// The application starts with the main ()
int main()
{
    cout << "Creating a program that illustrates how binary format is more accurate in C++ with CodeBlocks\n" << endl;

    float height[4] = {175.5, 153.0, 167.25, 160.70};

    /* Creating an output stream*/
    ofstream output_file_handler;
    output_file_handler.open(filename);
    output_file_handler.write((char *) &height, sizeof(height));
    // Close the file for reading
    output_file_handler.close();

    //  Clear array from memory
    for(int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        height[loop_counter] = 0;
    }

    /* Creating an input stream*/
    ifstream input_file_handler;
    input_file_handler.open(filename);

    input_file_handler.read((char *) &height, sizeof(height));
    for(int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        cout.setf(ios ::showpoint);
        cout << setw(10) << setprecision(2) << height[loop_counter];
    }
    input_file_handler.close();

    return 0;
}
