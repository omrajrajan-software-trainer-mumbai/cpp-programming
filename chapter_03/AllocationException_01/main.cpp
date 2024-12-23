// Creating a program to demonstrate the use of bad_alloc exception in C++ with CodeBlocks
// Chapter 03 Page no.49

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a class named sample
class sample
{
private:
    int first_data;
    char second_data;
public:
    void set (int integer, char character)
    {
        first_data = integer;
        second_data = character;
    }
    void display(void)
    {
        cout << "First Data = " << first_data ;
        cout << "\nSecond Data = " << second_data;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of bad_alloc exception in C++ with CodeBlocks\n" << endl;

    // Variable Declaration and Initialization
    sample *s_pointer;
    try
    {
        s_pointer = new sample;
    }
    catch(bad_alloc)
    {
        cout << "Bad allocation occurred... the program will terminate now..";
        return 1;
    }

    s_pointer -> set(25, 'A');
    s_pointer -> display();

    delete s_pointer;
    return 0;
}
