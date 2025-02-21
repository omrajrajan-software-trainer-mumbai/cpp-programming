// Creating a program to demonstrates the use of function width() C++ with CodeBlocks
// Chapter 10 Page no.268

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrates the use of function width() C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int number_of_items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};

    // Setting the width of column names
    cout.width(17);
    cout << "NUMBER OF ITEMS";
    cout.width(8);
    cout << "COST";

    cout.width(15);
    cout << "TOTAL VALUE" << endl;

    int sum = 0;

    for (int loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        // Setting the width of the data within the column headings
        // for proper allignment
        cout.width(17);
        cout << number_of_items[loop_counter];
        cout.width(8);
        cout << cost[loop_counter];

        int value_of_item = number_of_items[loop_counter] * cost[loop_counter];
        cout.width(15);
        cout << value_of_item << endl;

        // Finding the total sum of total value of number_of items
        sum += value_of_item;
    }

    cout << "\nGRAND TOTAL = ";

    cout.width(2);
    cout << sum << endl;

    return 0;
}
