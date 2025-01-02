// Creating a program to demonstrate an example of copy constructor in C++ with CodeBlocks
// Chapter 06 Page no.139

// Preprocessor Directives
#include <iostream>

using namespace std;

//Creating a class named Code
class Code
{
private:
    int id;
public:
    // Declaring some constructors
    Code(){}
    Code(int integer_parameter){id = integer_parameter;}
    Code(Code &address)
    {
        id = address.id;
    }
    // Defining a function named display
    void display(void)
    {
        cout << id;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of copy constructor in C++ with CodeBlocks\n" << endl;

    // Object creation and initialization
    Code A(1900);
    // Calling the copy constructor
    Code B(A);
    Code C = A;
    Code D;
    // Here copy constructor is not called
    D = A;

    cout << "\nid of A is "; A.display();
    cout << "\nid of B is "; B.display();
    cout << "\nid of C is "; C.display();
    cout << "\nid of D is "; D.display();

    return 0;
}
