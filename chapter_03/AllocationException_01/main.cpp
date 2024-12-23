// Creating a program to demonstrate the use of bad_alloc exception in C++ with CodeBlocks
// Chapter 03 Page no.49

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a class named sample
class Sample
{
// marking private members using the private access modifier
private:
    int first_data;
    char second_data;

// marking private members using the public access modifier
public:
    // defining set() method by passing two parameters
    void set(int integer_parameter, char character_parameter)
    {
        first_data = integer_parameter;
        second_data = character_parameter;
    }
    void display(void)
    {
        cout << "First Data = " << first_data ;
        cout << "\nSecond Data = " << second_data;
    }
};

// The application starts with the main()
int main()
{
    cout << "Creating a program to demonstrate the use of bad_alloc exception in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    Sample *s_pointer;

    // Exception Handling - using the try block to capture exceptions
    try
    {
        // new operator is used to dynamically allocate memory to objects or variables
        s_pointer = new Sample;
    }
    catch(bad_alloc)
    {
        cout << "Bad allocation occurred... the program will terminate now..";
        return 1;
    }

    // calling set() method with two arguments
    s_pointer -> set(25, 'A');
    s_pointer -> display();

    delete s_pointer;
    return 0;
}
