// Creating a program to demonstrates the use of extraction operator and getline() for reading the strings in C++ with CodeBlocks
// Chapter 10 Page no.263

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrates the use of extraction operator and getline() for reading the strings in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    int size_of_string = 20;
    char city[size_of_string];

    // Getting input from the user using extraction operator
    cout << "Enter city name:" << endl;
    cin >> city;
    cout << "City name:" << city << endl << endl;

    // Getting input from the user using getline()
    cout << "Enter city name again:" << endl;
    cin.getline(city, size_of_string);
    cout << "City name now:" << city << endl << endl;

    // Getting input from the user using getline()
    cout << "Enter another city name:" << endl;
    cin.getline(city, size_of_string);
    cout << "New city name:" << city << endl << endl;

    return 0;
}
