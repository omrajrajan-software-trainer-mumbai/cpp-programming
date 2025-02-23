// Creating a program that works on two or more files simultaneously in C++ with CodeBlocks
// Chapter 11 Page no.294

// Preprocessor Directives
#include <iostream>
#include <fstream>
// For exit()
#include <stdlib.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program that works on two or more files simultaneously in C++ with CodeBlocks\n" << endl;

    const int SIZE = 80;
    char line[SIZE];

    // Creating 2 input streams
    fstream file_input_handler_01, file_input_handler_02;
    file_input_handler_01.open("Country.exe");
    file_input_handler_02.open("Capital.exe");

    for(int loop_counter = 1; loop_counter <= 10; loop_counter++)
    {
        if(file_input_handler_01.eof() != 0)
        {
            cout << "Exit from the file Country" << endl;
            exit(1);
        }
        file_input_handler_01.getline(line, SIZE);
        cout << "Capital of " << line << endl;

        if(file_input_handler_02.eof() != 0)
        {
            cout << "Exit from the file Capital" << endl;
            exit(1);
        }
        file_input_handler_02.getline(line, SIZE);
        cout << line << endl;
    }
    file_input_handler_01.close();
    file_input_handler_02.close();

    return 0;
}
