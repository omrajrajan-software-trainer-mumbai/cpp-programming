// Creating a program to demonstrate a single vector class can be used for multiple type vectors in C++ with CodeBlocks
// Chapter 12 Page no.322

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

const int SIZE = 3;

// Creating a class template with place-holder and decorator
template<class T>
class Vector
{
// Private access modifier
private:
   // Vector variable of type T
    T *vector_variable;
// Public access modifier
public:
    // Constructor
    Vector()
    {
        vector_variable = new T[SIZE];
        for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
        {
            vector_variable[loop_counter] = 0;
        }
    }
    // Parameterized Constructor
    Vector(T *alternate_variable)
    {
        for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
        {
            vector_variable[loop_counter] = alternate_variable[loop_counter];
        }
    }
    // Overloading the operator '*'
    T operator *(Vector &address_variable)
    {
        T sum = 0;
        for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
        {
            sum += this->vector_variable[loop_counter] *address_variable.vector_variable[loop_counter];
        }
        return sum;
    }
    void display(void)
    {
        for (int loop_counter = 0; loop_counter < SIZE; loop_counter++)
        {
            cout << vector_variable[loop_counter] << "\t";
        }
        cout << endl;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate a single vector class can be used for multiple type vectors in C++ with CodeBlocks\n" << endl;

    // Declaring array of different data types
    int integer_array_1[3] = {1, 2, 3};
    int integer_array_2[3] = {4, 5, 6};
    float float_array_1[3] = {1.1,2.2,3.3};
    float float_array_2[3] = {4.4,5.5,6.6};

    // Creating objects same class but different data types for properties within class
    // Using the features of class templates
    Vector <int> vector_integer_object_1;
    Vector <int> vector_integer_object_2;
    Vector <float> vector_float_object_1;
    Vector <float> vector_float_object_2;

    vector_integer_object_1 = integer_array_1;
    vector_integer_object_2 = integer_array_2;
    vector_float_object_1 = float_array_1;
    vector_float_object_2 = float_array_2;

    // Calling the display() to display the solution
    cout << "Integer Object 1: ";
    vector_integer_object_1.display();
    cout << "Integer Object 2: ";
    vector_integer_object_2.display();
    cout << "Float Object 1: ";
    vector_float_object_1.display();
    cout << "Float Object 2: ";
    vector_float_object_2.display();

    cout << "Product of integer objects " << vector_integer_object_1 *vector_integer_object_2;
    cout << "Product of float objects " << vector_float_object_1 *vector_float_object_2;

    return 0;
}
