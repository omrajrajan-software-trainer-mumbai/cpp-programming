// Creating a program to demonstrate the use of overloading operators with two arguments in C++ with CodeBlocks
// Chapter 07 Page no.156

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Complex
class Complex
{
private:
    float first_variable;
    float second_variable;
public:
    // Constructors
    Complex(){};
    Complex(float real_number, float imaginary_number)
    {
        first_variable = real_number;
        second_variable = imaginary_number;
    }
    // Declaring the operator
    Complex operator +(Complex convertor);
    void display(void);
};

// Defining the functions using scope resolution operator
// Defining the operator
Complex Complex ::operator +(Complex convertor)
{
    // Creating an object within a class
    Complex temporary_object;
    temporary_object.first_variable = first_variable + convertor.first_variable;
    temporary_object.second_variable = second_variable + convertor.second_variable;
    return(temporary_object);
}

void Complex ::display(void)
{
    cout << first_variable << " + j" << second_variable << "\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of overloading operators with two arguments in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    Complex C1, C2, C3;
    // Invokes the constructors
    C1 = Complex(2.5, 3.5);
    C2 = Complex(1.6, 2.7);
    C3 = C1 + C2;

    // Displaying the final output
    cout << "C1 = "; C1.display();
    cout << "C2 = "; C2.display();
    cout << "C3 = "; C3.display();

    return 0;
}
