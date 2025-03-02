// Program to demonstrate command line arguments in C++ with CodeBlocks
// chap 11  page no 43

// Preprocessor directive
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char * argv[])
{
    cout << "Program to command line arguments in C++ with CodeBlocks" << endl;

    int number[9] = {11,22,33,44,55,66,77,88,99};
    if(argc != 3)
    {
        cout << "argc = " << argc << endl;
        cout << "Error in arguments \n";
        exit(1);
    }
    ofstream fout1, fout2;
    fout1.open(argv[1]);

    if(fout1.fail())
    {
        cout << "could not open the file" << argv[1] << "\n";
        exit(1);
    }
    fout2.open(argv[2]);

    if(fout2.fail())
    {
        cout << "could not open the file " << argv[2] << "\n";
        exit(1);
    }
    for(int loop_counter=0; loop_counter < 9; loop_counter++);
    {
        if(number[loop_counter] % 2 == 0)
            // write to EVEN file
            fout2 << number[loop_counter] << " ";
        else
            // write to ODD file
            fout1 << number[loop_counter] << " ";
    }
    fout1.close();
    fout2.close();

    ifstream fin;
    char ch;

    for(loop_counter=1; loop_counter < argc; loop_counter++);
    {
        fin.open(argv[loop_counter]);
        cout << "Contents of " << argv[loop_counter] << "\n";
        do
        {
            // read a value
            fin.get(ch);
            // display it
            cout << ch;
        }
    while(fin);
        cout << "\n\n";
        fin.close();
    }

    return 0;
}
