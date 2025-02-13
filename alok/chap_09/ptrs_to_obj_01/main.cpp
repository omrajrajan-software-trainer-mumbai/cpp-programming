// Program to illustrate the use of pointers to objects in C++ with CodeBlocks
// Chapter 09 Page no.22

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a class named Item
class Item
{
private:
    // Declaring the variables/fields in the private section of the class
    int code;
    float price;
public:
    // Defining the functions/Methods in the public section of the class
    void set_data(int integer_variable, float float_variable)
    {
       code = integer_variable;
       price = float_variable;
    }
    void get_data(void)
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};

// Defining an integer constant
const int SIZE = 2;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the use of pointers to objects in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    Item *pointer_variable = new Item [SIZE];
    Item *pointers_pointer = pointer_variable;
    int code, loop_counter;
    float price;

    // Initiating a loop to get input
    for(loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        cout << "Input code and price for item" << loop_counter + 1 << " ";
        cin >> code >> price;
        pointer_variable ->set_data(code, price);
        pointer_variable++;
    }
    // Initiating a loop to display output
    for(loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        cout << "Item: " << loop_counter + 1 << endl;
        pointers_pointer ->get_data();
        pointers_pointer++;
    }

    return 0;
}
