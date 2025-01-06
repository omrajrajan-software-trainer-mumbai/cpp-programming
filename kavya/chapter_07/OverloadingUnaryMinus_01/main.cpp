// Creating a program to demonstrate the use of overloading operators with single argument in C++ with CodeBlocks
// Chapter 07 Page no.154

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Space
class Space
{
private:
    int x;
    int y;
    int z;
public:
    void get_data(int first_parameter, int second_parameter, int third_parameter);
    void display(void);
    void operator -();
};

// Defining functions outside the class scope resolution operator
void Space ::get_data(int first_parameter, int second_parameter, int third_parameter)
{
    x = first_parameter;
    y = second_parameter;
    z = third_parameter;
}

void Space ::display(void)
{
    cout << "x = " << x << " ";
    cout << "y = " << y << " ";
    cout << "z = " << z << "\n";
}

// Defining the operator
void Space ::operator-()
{
    // This operator converts positive into negative integer
    x = -x;
    y = -y;
    z = -z;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of overloading operators with single argument in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    Space integer_convertor;
    integer_convertor.get_data(10, -20, 30);
    cout << "integer_convertor: ";
    integer_convertor.display();

    // Converting the integer
    -integer_convertor;

    cout << "-integer_convertor: ";
    integer_convertor.display();

    return 0;
}
