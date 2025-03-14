// Program to demonstrate input and output operations on characters in C++ with CodeBlocks
// chap 11  page no 24

// Preprocessor directive
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate input and output operations on characters in C++ with CodeBlocks" << endl;

    char string[80];
    cout<<"Enter a string: ";
    cin>>string;

    int len=strlen(string);
    fstream file;
    cout<<"\nOpening the 'TEXT' file and storing the string in it.\n\n";
    file.open("TEXT", ios::in | ios::out);

    for(int i=0;i<len;i++)
    file.put(string[i]);
    file.seekg(0);
    char ch;
    cout<<"Reading the file contents: ";
    while(file)
    {
        file.get(ch);
        cout<<ch;
    }
    return 0;
}
