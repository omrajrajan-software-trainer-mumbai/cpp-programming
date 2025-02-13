// Creating a program to define an array of pointers to objects in C++ with CodeBlocks
// Chapter 09 Page no.237

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named City
class City {
// Access Modifiers
protected:
    char *name;
    int length;
// Access Modifiers
public:
    // A constructor definition
    City() {
        length = 0;
        name = new char[length + 1];
    }
    // A function Definition
    void get_name(void) {
        char *city_name;
        city_name = new char[30];

        // Inputting output from the user
        cout << "Enter city name: ";
        cin.getline(city_name, 30);

        // Detecting the actual length of the string
        length = strlen(city_name);
        name = new char[length + 1];
        strcpy(name, city_name);
    }
    void print_name(void) {
        /* Printing the name */
        cout << name << endl;
    }
};

// The application starts with the main ()
int main() {
    cout << "Creating a program to define an array of pointers to objects in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    City *character_pointer[10];

    int number = 0; // Start from index 0
    int option;

    // Initiating a do-while loop
    do {
        // Creating new city
        character_pointer[number] = new City;
        cin.ignore();  // Ignore leftover newline from previous input
        character_pointer[number]->get_name();
        number++;

        cout << "Do you want to enter one more name?\n";
        cout << "(Enter 1 for yes 0 for no): ";
        cin >> option;
        cout << "\n";
    } while (option && number < 10);  // Prevent out-of-bounds error

    cout << "\n";
    for (int loop_counter = 0; loop_counter < number; loop_counter++) {  // Fix loop range
        character_pointer[loop_counter]->print_name();
    }

    return 0;
}
