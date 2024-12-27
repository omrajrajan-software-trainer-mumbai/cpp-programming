// Creating a program to demonstrate an example of arrays within a class and also as objects array in C++ with CodeBlocks
// Chapter 05 Page no.110

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named employee
class employee
{
private:
    char name[30];
    float age;
public:
    void get_data(void);
    void put_data(void);
};

// Defining the function get_data
void employee ::get_data(void)
{
    cout << "\nEnter the name of the employee: ";
    cin >> name;
    cout << "Enter the age of the employee: ";
    cin >> age;
}

// Defining the function put_data
void employee ::put_data()
{
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
}

// Defining the size of array as constant
const int SIZE = 3;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of arrays within a class and also as objects array in C++ with CodeBlocks\n" << endl;

    // Declaring the object
    employee manager[SIZE];

    // Initiating a loop to input data from user
    for(int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        cout << "\nDetails of Manager" << loop_counter + 1 << "\n";
        // Calling the function to get data from the user
        manager[loop_counter].get_data();
    }
    cout << "\n";

    // Initiating a loop to display data
    for(int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        cout << "\nManager" << loop_counter + 1 << "\n";
        // Calling the function to display the data
        manager[loop_counter].put_data();
    }

    return 0;
}
