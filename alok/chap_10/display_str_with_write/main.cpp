// Program to illustrates how write() method displays a string in C++ with CodeBlocks
// chap 10  page no 14

// Preprocessor directive
#include <iostream>
#include<cstring>

using namespace std;

// Application starts with the main() function or method
int main()
{
    char *string1 = "C++ ";
    char *string2 = "Programming";

    int length_of_string1 = strlen(string1);
    int length_of_string2 = strlen(string2);

    for(int loop_counter=1; loop_counter<length_of_string2; loop_counter++)
    {
        cout.write(string2,loop_counter);
        cout << endl;
    }
    for( int loop_counter=length_of_string2; loop_counter>0; loop_counter--)
    {
        cout.write(string2,loop_counter);
        cout << endl;
    }

    // concatenating strings with the use of method piping
    cout.write(string1,length_of_string1).write(string2,length_of_string2);
    cout << endl;

    // crossing the boundary
    cout.write(string1,10);

    return 0;
}
