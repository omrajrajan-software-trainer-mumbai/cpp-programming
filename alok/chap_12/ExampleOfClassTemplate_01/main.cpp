// Program to demonstrate the use of a vector class template in C++ with CodeBlocks
// chap 12 page no 06

// Preprocessor directive - Includes the iostream library for standard input and output
#include <iostream>

using namespace std;

const int size = 3; // Defining a constant size for the vector

// Template class definition for creating generic vector objects
template <class T>
class vector
{
    T* vect; // Pointer to hold dynamic array for vector elements

public:
    // Default constructor - Initializes vector elements to zero
    vector()
    {
        vect = new T[size]; // Allocating memory dynamically for the vector
        for(int loop_counter = 0; loop_counter < size; loop_counter++)
        {
            vect[loop_counter] = 0; // Initializing all elements to zero
        }
    }

    // Parameterized constructor - Initializes vector with an array
    vector(T* a)
    {
        vect = new T[size]; // Allocating memory dynamically for the vector
        for(int loop_counter = 0; loop_counter < size; loop_counter++)
        {
            vect[loop_counter] = a[loop_counter]; // Copying array elements into the vector
        }
    }

    // Overloaded multiplication operator (*) to calculate dot product of two vectors
    T operator*(vector &y)
    {
        T sum = 0; // Variable to store the dot product result
        for(int loop_counter = 0; loop_counter < size; loop_counter++)
        {
            sum += this->vect[loop_counter] * y.vect[loop_counter]; // Dot product calculation
        }
        return sum;
    }

    // Display function to print the vector elements
    void display(void)
    {
        for(int loop_counter = 0; loop_counter < size; loop_counter++)
        {
            cout << vect[loop_counter] << "\t"; // Displaying each element separated by a tab
        }
        cout << "\n"; // New line after displaying vector elements
    }

    // Destructor to free dynamically allocated memory
    ~vector()
    {
        delete[] vect; // Freeing dynamically allocated memory
    }
};

// Main function - Program execution starts here
int main()
{
    cout << "Program to demonstrate the use of a vector class template in C++ with CodeBlocks" << endl << endl;

    int array_1[3] = {1, 2, 3}; // Initializing first integer array
    int array_2[3] = {4, 5, 6}; // Initializing second integer array

    vector<int> vector1(array_1); // Creating first vector using parameterized constructor
    vector<int> vector2(array_2); // Creating second vector using parameterized constructor

    cout << "vector1 = ";
    vector1.display(); // Displaying first vector

    cout << "vector2 = ";
    vector2.display(); // Displaying second vector

    cout << "vector1 X vector2 = " << vector1 * vector2 << endl; // Calculating and displaying dot product

    return 0; // Returning 0 to indicate successful execution
}
