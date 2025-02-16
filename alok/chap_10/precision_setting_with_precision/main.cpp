// Program to shows how the functions width() and precision() are jointly used to control the output format in C++ with CodeBlocks
// chap 10  page no 22

// Preprocessor directive
#include <iostream>
#include <math.h>

using namespace std;

// Application starts with the main() function or method
int main()
{
    cout << "Program to shows how the functions width() and precision() are jointly used to control the output format in C++ with CodeBlocks" << endl;

    cout << "Precision set to 3 digits \n\n";
    cout.precision(3);
    cout.width(10);
    cout << "VALUE \t";
    cout.width(20);
    cout << "Square root OF VALUE" << endl;
    for(int loop_counter=1; loop_counter<=5; loop_counter++)
    {
        cout.width(8);
        cout << loop_counter;
        cout.width(13);
        cout << sqrt(loop_counter) << endl;
    }
    cout << "\n Precision set to 5 digits \n\n";
    // precision parameter changed
    cout.precision(5);

    cout << " sqrt(10) = " << sqrt(10) << endl;
    // precision set to default
    cout.precision(0);

    cout << " sqrt(10) = " << sqrt(10) << " (default setting)\n";

    return 0;
}
