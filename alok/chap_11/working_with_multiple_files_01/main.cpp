// Program to demonstrate uses a multiple file for both writing and reading the data in C++ with CodeBlocks
// chap 11  page no 13

// Preprocessor directive
#include <iostream>
#include <fstream>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate uses a multiple file for both writing and reading the data in C++ with CodeBlocks" << endl;

    ofstream output_file_handler;
    output_file_handler.open("country.dat");
    output_file_handler << "United States of America" << endl;
    output_file_handler << "United Kingdom" << endl;
    output_file_handler << "South Korea" << endl;

    output_file_handler.open("capital.dat");
    output_file_handler << "Washington" << endl;
    output_file_handler << "London" << endl;
    output_file_handler << "Seoul" << endl;
    output_file_handler.close();

    // Reading the files
    const int size_of_line = 80;
    char line[size_of_line];
    ifstream input_file_handler;
    input_file_handler.open("country.dat");
    cout << endl <<"contents of country file " << endl;
    while(input_file_handler)
    {
        input_file_handler.getline(line, size_of_line); // read a line
        cout << line << endl; // display it
    }
    input_file_handler.close(); // disconnect "country" and
    input_file_handler.open("capital.dat"); // connect "capital"
    cout << endl << "Contents of capital file " << endl;
    while(input_file_handler)
    {
        input_file_handler.getline(line, size_of_line);
        cout << line << endl;
        input_file_handler.close();

    }
    return 0;
}
