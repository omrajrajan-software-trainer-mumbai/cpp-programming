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

    // connect ITEM file to outf
    ofstream outf("ITEM");
    cout << "Enter item name: ";
    char name[30];

    // get name from key board and
    cin >> name;
    // write to file ITEM
    outf << name << endl;
    cout << "Enter item cost: ";
    float cost;

    // get cost from key board and
    cin >> cost;

    // write to file ITEM
    outf << cost << endl;

    // Disconnect ITEM file from outf
    outf.close();

    // connect ITEM file to inf
    ifstream inf("ITEM");

    // read name from file ITEM
    inf >> name;

    // read cost from file ITEM
    inf >> cost;
    cout << endl;
    cout << "Item name:" << name << endl;
    cout << "Item cost:" << cost << endl;

    // Disconnect ITEM from inf
    inf.close();

    return 0;
}
