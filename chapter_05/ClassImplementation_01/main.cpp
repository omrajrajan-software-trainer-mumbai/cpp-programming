// Creating a program to demonstrate an example to implement and use the class in C++ with CodeBlocks
// Chapter 05 Page no.95

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named item
class item
{
// These fields cannot be accessed directly by the main() as they are private
private:
    int number;
    float cost;

// These fields or methods can be accessed directly by the main() as they are public
public:
    // A function being declared within a class
    int get_data(int integer_parameter, float floating_value);

    // A function being defined within a class
    void put_data(void)
    {
        cout << "Number: " << number << "\n";
        cout << "Cost: " << cost << "\n";
    }
};

// Defining a class method using scope resolution operator
int item ::get_data(int integer_parameter, float floating_value)
{
    // Using the private variables directly
    number = integer_parameter;
    cost = floating_value;
}

// The application starts with the main ()
int main()
{
    cout << " Creating a program to demonstrate an example to implement and use the class in C++ with CodeBlocks\n" << endl;

    // Creating an object product
    item pencil;
    cout << "\nobject pencil\n";

    // Calling the member function
    pencil.get_data(100, 299.95);
    pencil.put_data();

    // Creating another object
    item pen;
    cout << "\nobject pen\n";

    // Calling the member function
    pen.get_data(200, 175.5);
    pen.put_data();

    return 0;
}
