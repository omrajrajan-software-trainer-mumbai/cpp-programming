// Creating a program to demonstrate the use of overloaded constructors in C++ with CodeBlocks
// Chapter 06 Page no.134

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Complex
class Complex
{
private:
    float first_value, second_value;
public:
    // An empty constructor with no parameters
    Complex(){}
    // A constructor with only one parameter
    Complex(float first_parameter)
    {
        first_value = second_value = first_parameter;
    }
    // A constructor with 2 parameters
    Complex (float real_number, float imaginary_number)
    {
        first_value  = real_number;
        second_value = imaginary_number;
    }
    // Declaring some friend functions
    friend Complex sum(Complex, Complex);
    friend void show (Complex);
};

// Defining the friend function sum
Complex sum (Complex addition_1, Complex addition_2)
{
    Complex addition_3;

    addition_3.first_value = addition_1.first_value + addition_2.first_value;
    addition_3.second_value = addition_1.second_value + addition_2.second_value;

    return addition_3;
}

// Defining the friend function sum
void show (Complex addition)
{
    cout << addition.first_value << " + j" << addition.second_value << "\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of overloaded constructors in C++ with CodeBlocks\n" << endl;

    // Object Definition and Initialization
    Complex object_1(2.7, 3.5);
    Complex object_2(1.6);
    Complex object_3;

    object_3 = sum(object_1, object_2);

    // Calling the functions
    cout << "First solution = "; show(object_1);
    cout << "Second solution = "; show(object_2);
    cout << "Third solution = "; show(object_3);

    // Here's another way of giving values
    Complex first_object, second_object, third_object;
    first_object = Complex(2.5, 3.9);
    second_object = Complex(1.6, 2.5);
    third_object = sum(first_object, second_object);

    cout << "\n";
    cout << "First object Solution = "; show(first_object);
    cout << "Second object Solution = "; show(second_object);
    cout << "Third object Solution = "; show(third_object);

    return 0;
}
