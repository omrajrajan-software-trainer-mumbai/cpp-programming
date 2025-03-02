// Creating a program that illustrates how class objects can be written to and read from the disk files in C++ with CodeBlocks
// Chapter 11 Page no.302

// Preprocessor Directives
#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

// Creating a class named Inventory
class Inventory
{
// Private access modifier
private:
    // Item name
    char name[10];
    // Item code
    int code;
    // Cost of each item
    float cost;
// Public access modifier
public:
    // Function to read data
    void read_data(void);
    // Function to write data
    void write_data(void);
};

// Defining the read_data()
// Input from user
void Inventory ::read_data(void)
{
    cout << "Enter name: "; cin >> name;
    cout << "Enter code: "; cin >> code;
    cout << "Enter cost: "; cin >> cost;
}

// Defining the write_data()
// Displaying the input in formatted manner
void Inventory ::write_data(void)
{
    cout << setiosflags(ios::left)
        << setw(10) << name
        << setiosflags(ios::right)
        << setw(10) << code
        << setprecision(2)
        << setw(10) << cost
        << endl;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program that illustrates how class objects can be written to and read from the disk files in C++ with CodeBlocks\n" << endl;

    // Object Declaration
    // Declaring array of 3 objects
    Inventory item[3];
    // Input and output file
    fstream file_handler;

    file_handler.open("STOCK.exe", ios ::in | ios ::out);

    cout << "ENTER DETAILS FOR THREE ITEMS" << endl;

    // loop for getting data from user
    for(int loop_counter = 0; loop_counter < 3; loop_counter++)
    {
        item[loop_counter].read_data();
        file_handler.write((char *) &item[loop_counter], sizeof(item[loop_counter]));
    }

    // Reset to start
    file_handler.seekg(0);

    cout << "\nOUTPUT\n" << endl;

    for(int loop_counter = 0; loop_counter < 3; loop_counter++)
    {
        file_handler.read((char *) &item[loop_counter], sizeof(item[loop_counter]));
        item[loop_counter].write_data();
    }

    file_handler.close();

    return 0;
}
