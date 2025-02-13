// Creating a program to illustrate an example of pure virtual functions in C++ with CodeBlocks
// Chapter 09 Page no.248

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a base class named Balaguruswamy
class Balaguruswamy
{
// Declaring variables or functions in the public section of the class
public:
    // Denotes pure virtual function definition
    virtual void example() = 0;
};
// Derived class named C_programming
// First Derived class of the program
class C_programming :public Balaguruswamy
{
// Declaring variables or functions in the public section of the class
public:
    void example()
    {
        cout << "C textbook written by Balaguruswamy" << endl;
    }
};
// Derived class named OOP_programming
// Second Derived class of the program
class OOP_programming : public Balaguruswamy
{
// Declaring variables or functions in the public section of the class
public:
    void example()
    {
        cout << "C++ textbook written by Balaguruswamy" << endl;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate an example of pure virtual functions in C++ with CodeBlocks" << endl << endl;

    // Array Declaration and Initialization
    Balaguruswamy *array_for_list[2];

    // Object Declaration and Initialization
    C_programming c_object;
    OOP_programming oop_object;
    // Storing the address of objects
    array_for_list[0] = &c_object;
    array_for_list[1] = &oop_object;

    // Calling the overriding functions through arrow operator
    array_for_list[0] ->example();
    array_for_list[1] ->example();

    // Proper program termination
    return 0;
}
