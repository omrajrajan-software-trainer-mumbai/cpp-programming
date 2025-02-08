// Program to define an array of pointers to objects in C++ with CodeBlocks
// Chapter 09 Page no.24

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named City
class City
{
// Access Modifiers
protected:
    char *name;
    int length;
// Access Modifiers
public:
    // A constructor definition
    City()
    {
        length = 0;
        name = new char[length + 1];
    }
    // A function Definition
    void get_name(void)
    {
        char *city_name;
        city_name = new char[30];

        // Inputting output from the user
        cout << "Enter city name: ";
        cin >> city_name;
        cout << "\n";
        // Detecting the actual length of the string
        length = strlen(city_name);
        name = new char[length + 1];
        strcpy(name, city_name);
    }
    void print_name(void)
    {
        /* Printing the name */
        cout << name << endl;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to define an array of pointers to objects in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    /* Array of 10 pointer to the cities */
    City *character_pointer[10];

    int number = 1;
    int option;

    // Initiating a do-while loop
    do
    {
        // Creating new city
        character_pointer[number] = new City;
        character_pointer[number] ->get_name();
        number++;
        cout << "Do you want to enter one more name?\n";
        cout << "(Enter 1 for yes 0 for no): ";
        cin >> option;
        cout << "\n";
    }
    while (option);

    cout << "\n";
    for(int loop_counter = 1; loop_counter <= number; loop_counter++)
    {
        character_pointer[loop_counter] ->print_name();
    }

    return 0;
}
