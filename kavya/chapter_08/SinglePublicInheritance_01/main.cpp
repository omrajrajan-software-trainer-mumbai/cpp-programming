// Creating a program to demonstrate an example of Single Public Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.181

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named B
class B
{
private:
    // As the the below variable is private it is not inheritable
    int a;
public:
    // The below given variable is public hence it is inheritable
    int b;
    void set_ab();
    int get_a(void);
    int show_a(void);
};

// Public Derivation
//"Public members" of the base class become public members of the derived class and hence accessible to the objects of the derived class
class D : public B
{
private:
    int c;
public:
    void multiply(void);
    void display(void);
};

// Defining the functions
void B ::set_ab()
{
    a = 5; b = 10;
}
int B ::get_a(void)
{
    return a;
}
int B ::show_a(void)
{
    cout << "Displaying the private variable: " << a << "\n" ;
}
void D ::multiply(void)
{
    c = b * get_a();
}
void D ::display(void)
{
    cout << "a: " << get_a() << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Single Public Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    D object_1;

    object_1.set_ab();
    object_1.multiply();
    object_1.show_a();
    object_1.display();

    object_1.b = 20;
    object_1.multiply();
    object_1.display();

    return 0;
}
