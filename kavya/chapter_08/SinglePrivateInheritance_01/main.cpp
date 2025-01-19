// Creating a program to demonstrate an example of Single Private Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.181

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named
class B
{
private:
    // As the the below variable is private it is not inheritable
    int a;
public:
    // The below given variable is public hence it is inheritable
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

// Private Derivation
//"Public members" of the base class become private members of the derived class and hence accessible only by the member functions of the derived class
class D : private B
{
private:
    int c;
public:
    void multiply(void);
    void display(void);
};

// Defining the functions
void B ::get_ab (void)
{
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}
int B ::get_a(void)
{
    return a;
}
void B ::show_a(void)
{
    cout << "a = " << a << "\n";
}
void D ::multiply(void)
{
    get_ab();
    // 'a' cannot be accessed directly
    c = b * get_a();
}
void D::display()
{
    // Outputs the value of 'a'
    show_a();
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Single Private Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    D object_1;

    object_1.multiply();
    object_1.display();

    return 0;
}
    /*
    * Types of calling that wont work in this program
    * object_1.get_ab();
    * object_1.show_a();
    * This wont work because 'b' has become private
    * object_1.b = 20
    */
