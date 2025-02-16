// Program to demonstrates the use of >> and getline() for reading the strings in C++ with CodeBlocks
// chap 10  page no 12

// Preprocessor directive
#include <iostream>

using namespace std;

// Application starts with the main() function or method
int main()
 {
    cout << "Program to demonstrates the use of >> and getline() for reading the strings in C++ with CodeBlocks" << endl;

    int max_input_size = 20;
    char city[20];

    cout << "Enter city name: "<< endl;
    cin >> city;

    cout << "City name:" << city << endl;
    cout << "Enter city name again: " << endl;
    cin.getline(city, max_input_size);

    cout << "City name now: " << city << endl;
    cout << "Enter another city name: \n";
    cin.getline(city, max_input_size);

    cout << "New city name: " << city <<     endl;

    return 0;
}
