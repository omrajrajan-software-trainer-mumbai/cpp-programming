// Program to demonstrate fill() method in C++ with CodeBlocks
// chap 10  page no 25

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate fill() method in C++ with CodeBlocks" << endl;

    cout.fill('<');
    cout.precision(3);
    for(int loop_counter = 1; loop_counter <= 6; loop_counter++)
    {
        cout.width(5);
        cout << loop_counter;
        cout.width(10);
        cout << 1.0 / float(loop_counter) << endl;
        if (loop_counter == 3)
        cout.fill ('>');
    }
    cout << "\nPadding changed " << endl;
    cout.fill('*#'); // fill() reset
    cout.width(15);
    cout << 12.345678 << endl;
    return 0;
}
