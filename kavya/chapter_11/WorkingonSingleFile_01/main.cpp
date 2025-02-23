// Creating a program that uses a single file for writing and reading data in C++ with CodeBlocks
// Chapter 11 Page no.291

// Preprocessor Directives
#include <iostream>
#include <fstream>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program that uses a single file for writing and reading data in C++ with CodeBlocks\n" << endl;

    // Connecting the file ITEM to output_file_handler
    // ofstream is read-only mode
    ofstream output_file_handler("ITEM.EXE");

    cout << "Enter item name: ";
    char name[30];
    cin >> name;

    // Write to file ITEM
    output_file_handler << name << endl;

    cout << "Enter item cost: ";
    float cost;
    cin >> cost;

    // Write to file ITEM
    output_file_handler << cost << endl;

    // Disconnect ITEM file from output_file_handler
    output_file_handler.close();

    // Connect the ITEM to input_file_handler
    // ifstream is write-only mode
    ifstream input_file_handler("ITEM.EXE");

    input_file_handler >> name;
    input_file_handler >> cost;
    cout << endl;
    cout << "Item name:" << name << endl;
    cout << "Item cost:" << cost << endl;

    //    Disconnect ITEM from input_file_handler
    input_file_handler.close();

    return 0;
}
