// Program to illustrate the use of single character handling functions get() and put() in C++ with CodeBlocks
// chap 10  page no 09

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function or method
int main()
{
    cout << "Program to illustrate the use of single character handling functions get() and put() in C++ with CodeBlocks" << endl;

    int character_count = 0;
    char single_character;

    cout << "INPUT TEXT" << endl;
    cin.get(single_character);

    while(single_character != '\n')
    {
        cout.put(single_character);
        character_count++;
        cin.get(single_character);
    }
    cout << " \nNumber of characters = " << character_count << endl;

    return 0;
}
