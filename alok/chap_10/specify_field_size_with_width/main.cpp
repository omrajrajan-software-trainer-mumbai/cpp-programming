// Program to specify field size using width() function in C++ with CodeBlocks
// chap 10  page no 19

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function or method
int main()
{
    cout << "Program to specify field size using width() function in C++ with CodeBlocks" << endl;

    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};

    cout.width(5);
    cout << "ITEMS";
    cout.width(8);
    cout << "COST";
    cout.width(15);
    cout << "TOTAL VALUE" << endl;
    int sum = 0;

    for(int loop_counter=0; loop_counter<4; loop_counter++)
    {
        cout.width(5);
        cout << items[loop_counter];
        cout.width(8);
        cout << cost[loop_counter];
        int value = items[loop_counter] * cost[loop_counter];
        cout.width(15);
        cout << value << endl;
        sum = sum + value;
    }

    cout << "\nGrand Total = ";
    cout.width(2);
    cout << sum << endl;

    return 0;
}
