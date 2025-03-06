// Program to demonstrate uses a single file for both writing and reading the data in C++ with CodeBlocks
// chap 11  page no 10

// Preprocessor directive
#include <iostream>
#include <fstream>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate uses a single file for both writing and reading the data in C++ with CodeBlocks" << endl;

    // connect ITEM file to output_file_handler
    ofstream output_file_handler("ITEM.dat");
    cout << "Enter item name: ";
    char name[30];

    // get name from key board and
    cin >> name;
    // write to file ITEM
    output_file_handler << name << endl;
    cout << "Enter item cost: ";
    float cost;

    // get cost from key board and
    cin >> cost;

    // write to file ITEM
    output_file_handler << cost << endl;

    // Disconnect ITEM file from output_file_handler
    output_file_handler.close();

    // connect ITEM file to input_file_handler
    ifstream input_file_handler("ITEM.dat");

    // read name from file ITEM
    input_file_handler >> name;

    // read cost from file ITEM
    input_file_handler >> cost;
    cout << endl;
    cout << "Item name:" << name << endl;
    cout << "Item cost:" << cost << endl;

    // Disconnect ITEM from input_file_handler
    input_file_handler.close();

    return 0;
}
