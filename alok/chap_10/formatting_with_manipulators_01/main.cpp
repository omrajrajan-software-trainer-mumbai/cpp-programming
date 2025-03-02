// Program to demonstrate the formatting of the output values using both manipulators and ios functions function in C++ with CodeBlocks
// chap 10  page no 32

// Preprocessor directive
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// Application starts with the main() function
int main()
 {
    cout << "Program to demonstrate the formatting of the output values using both manipulators and ios functions function in C++ with CodeBlocks" << endl;
    cout.setf(ios :: showpoint);
    cout << setw(5) << "n" << setw(15) << "Inverse_of_n" << setw(15) << "Sum_of_terms\n\n";
    double term, sum = 0;

    for(int n = 1; n <= 10; n++)
    {
        term = 1.0 / float(n);
        sum = sum + term;
        cout << setw(5) << n << setw(14) << setprecision(4) << setiosflags(ios::scientific) << term << setw(13) << resetiosflags(ios::scientific) << sum << endl;
    }
    return 0;
}
