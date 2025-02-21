// Program to demonstrate read files from two files simultaneously in C++ with CodeBlocks
// chap 11  page no 16

// Preprocessor directive
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate read files from two files simultaneously in C++ with CodeBlocks" << endl;

    const int SIZE = 80;
    char line[SIZE];
    ifstream fin1, fin2;
    fin1.open("country");
    fin2.open("capital");

    for(int i=1; i<=10; i++)
    {
        if(fin1.eof() != 0)
        {
            cout << "Exit from country \n";
            exit(1);
        }

        fin1.getline(line, SIZE);
        cout << "Capital of "<< line ;

        if(fin2.eof() != 0)
        {
            cout << "Exit from capital\n";
            exit(1);
        }
        fin2.getline(line,SIZE);
        cout << line << "\n";
    }
    return 0;
}
