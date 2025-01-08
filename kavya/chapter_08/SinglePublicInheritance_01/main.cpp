// Creating a program to demonstrate an example of Single Public Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.181

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named
class Brace
{
private:
    // As the the below variable is private it is not inheritable
    int private_1;
public:
    // The below given variable is public hence it is inheritable
    int public_variable;
    void set_value();
    int get_variable(void);
    int show_variable(void);
};

// Public Derivation
//"Public members" of the base class become public members of the derived class and hence accessible to the objects of the derived class
class Disk : public Brace
{
private:
    int private_2;
public:
    void multiply(void);
    void display(void);
};

// Defining the funtions
void Brace ::set_value()
{
    private_1 = 5; public_variable = 10;
}
int Brace ::get_variable(void)
{
    return private_1;
}
int Brace ::show_variable(void)
{
    cout << "Displaying the private variable: " << private_1 << "\n" ;
}
void Disk ::multiply(void)
{
    private_2 = public_variable * get_variable();
}
void Disk ::display(void)
{
    cout << "Private Variable 01: " << get_variable() << "\n";
    cout << "Public Variable 01: " << public_variable << "\n";
    cout << "Private Variable 02: " << private_2 << "\n\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Single Public Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    Disk object_1;

    object_1.set_value();
    object_1.multiply();
    object_1.show_variable();
    object_1.display();

    object_1.public_variable = 20;
    object_1.multiply();
    object_1.display();

    return 0;
}
