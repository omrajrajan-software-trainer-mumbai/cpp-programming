// Creating a program to demonstrate the use of Virtual functions in C++ with CodeBlocks
// Chapter 09 Page no.243

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named Base
class Base
{
public:
    void display()
    {
        cout << "\nDisplay Base";
    }
    virtual void show()
    {
        cout << "\nShow Base\n";
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "\nDisplay Derived";
    }
    virtual void show()
    {
        cout << "\nShow Derived\n";
    }

};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of Virtual functions in C++ with CodeBlocks" << endl << endl;

    // Object Declaration and Initialization
    Base base_object;
    Derived derived_object;
    Base *base_pointer;

    cout << "\nbase_pointer points to Base\n";
    base_pointer = &base_object;
    // Calls the base version
    base_pointer ->display();
    base_pointer ->show();

    cout << "\nbase_pointer points to Derived\n";
    base_pointer = &derived_object;
    // Calls the base version
    base_pointer ->display();
    // Calls the derived version
    base_pointer ->show();

    return 0;
}
