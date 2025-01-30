// Creating a program to demonstrate an example of Multiple Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.196

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named M
// Base class
class M
{
protected:
    int m;
public:
    void get_m(int);
};

// Creating a class named N
// Base class
class N
{
protected:
    int n;
public:
    void get_n(int);
};

// Creating a derived class from two base class M and N
class P : public M, public N
{
public:
    void display(void);
};

// Defining the functions in the class M
void M ::get_m(int x)
{
    m = x;
}
// Defining the functions in the class N
void N ::get_n(int y)
{
    n = y;
}
// Defining the functions in the class P
void P ::display(void)
{
    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";
    cout << "m * n = " << m * n << "\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Multiple Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    P p;
    // Calling of member functions
    p.get_m(10);
    p.get_n(20);
    p.display();

    return 0;
}
