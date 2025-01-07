// Creating a program to demonstrate the use of overloading operators using the friend function in C++ with CodeBlocks
// Chapter 07 Page no.159

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a global variable
const int SIZE = 3;

// Creating a class named Vector
class Vector
{
private:
    int vector_array[SIZE];
public:
    // Declaring constructors
    Vector();
    Vector(int *x);
    // Declaring friend functions
    friend Vector operator *(int integer_parameter, Vector vector_parameter);
    friend Vector operator *(Vector vector_parameter, int integer_parameter);
    friend istream & operator >> (istream &, Vector &);
    friend ostream & operator << (ostream &, Vector &);
};

// Defining the functions outside the class block
Vector ::Vector()
{
    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        vector_array[loop_counter] = 0;
    }
}

Vector ::Vector(int *x)
{
    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        vector_array[loop_counter] = x[loop_counter];
    }
}

// Defining the operators
Vector operator *(int integer_parameter, Vector vector_parameter)
{
    Vector c;
    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        c.vector_array[loop_counter] = integer_parameter * vector_parameter.vector_array[loop_counter];
    }
    return c;
}

Vector operator *(Vector vector_parameter, int integer_parameter)
{
    Vector c;
    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        c.vector_array[loop_counter] = vector_parameter.vector_array[loop_counter] * integer_parameter ;
    }
    return c;
}

istream & operator >> (istream &display_input, Vector &vector_parameter)
{
    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        display_input >> vector_parameter.vector_array[loop_counter];
    }
    return (display_input);
}

ostream & operator << (ostream &display_output, Vector &vector_parameter)
{
    display_output << " (" << vector_parameter.vector_array[0];

    for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
    {
        display_output << ", " << vector_parameter.vector_array[loop_counter];
    }
    display_output << ") ";
    return (display_output);
}

// Defining the array
int x[SIZE] = {2, 4, 6};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of overloading operators using the friend function in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    // Invokes the constructor
    Vector m;
    Vector n = x;

    cout << "Enter elements of Vector m" << "\n";
    // invokes operator >>() function
    cin >> m;
    cout << "\n";
    // Invokes the operator <<()
    cout << "m = " << m << "\n";

    Vector first_object, second_object;
    first_object = 2 * m;
    second_object = n * 2;

    cout << "\n";
    cout << "first_object = " << first_object << "\n";
    cout << "second_object = " << second_object << "\n";

    return 0;
}
