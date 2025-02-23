// Creating a program that uses multiple files for writing and reading data in C++ with CodeBlocks
// Chapter 11 Page no.293

// Preprocessor Directives
#include <iostream>
#include <fstream>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program that uses multiple files for writing and reading data in C++ with CodeBlocks\n" << endl;

    /* Creating an output stream*/
    ofstream file_output;
    // Connecting the file "country" to it
    file_output.open("Country.exe");

     file_output << "United States of America" << endl;
     file_output << "United Kingdom" << endl;
     file_output << "South Korea"  << endl;

     // Disconnect "Country"
     file_output.close();

     // Connecting the file "Capital"
    file_output.open("Capital.exe");

     file_output << "Washington" << endl;
     file_output << "London" << endl;
     file_output << "Seoul"  << endl;

     file_output.close();

    // Reading the files
    // The size of line
    const int SIZE = 80;
    char line[SIZE];

    // create input stream
    ifstream file_input;
    //  connect "Country" to it
    file_input.open("Country.exe");

    cout << "Contents of Country file" << endl;

    // check end-of-file
    while(file_input)
    {
       // Read a line
       file_input.getline(line, SIZE);
       // Displaying the line
       cout << line << endl;
    }
    // disconnect "Country" and  connect "Capital"
    file_input.close();
    file_input.open("Capital.exe");

    cout << "Contents of Capital file" << endl;

    while(file_input)
    {
       // Read a line
       file_input.getline(line, SIZE);
       // Displaying the line
       cout << line << endl;
    }
    file_input.close();

    return 0;
}
