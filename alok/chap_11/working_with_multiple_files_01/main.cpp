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

    ofstream fout;
    fout.open("country");
    fout << "United States of America\n";
    fout << "United Kingdom\n";
    fout << "South Korea\n";
    fout.close();

    fout.open("capital");
    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul\n";
    fout.close();

    // Reading the files
    const int size_of_line = 80;
    char line[size_of_line];
    ifstream fin;
    fin.open("country");
    cout <<"contents of country file\n";
    while(fin)
    {
        fin.getline(line, size_of_line); // read a line
        cout << line ; // display it
    }
    fin.close(); // disconnect "country" and
    fin.open("capital"); // connect "capital"
    cout << "\nContents of capital file \n";
    while(fin)
    {
        fin.getline(line, size_of_line);
        cout << line ;
        fin.close();

    }
    return 0;
}
