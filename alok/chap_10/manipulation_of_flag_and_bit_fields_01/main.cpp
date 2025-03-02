// Program to demonstrate the manipulation of flag and bit fields for setf() function in C++ with CodeBlocks
// chap 10  page no 25

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate the manipulation of flag and bit fields for setf() function in C++ with CodeBlocks" << endl;

    int num;
    cout << "Enter an integer value: ";
    cin >> num;

    cout << "The hexadecimal, octal and decimal representation of " << num << " is: ";
    cout.setf(ios::hex, ios::basefield);
    cout << num << ", ";

    cout.setf(ios::oct, ios::basefield); cout << num <<" and ";
    cout.setf(ios::dec, ios::basefield);

    cout << num << " respectively";
}
