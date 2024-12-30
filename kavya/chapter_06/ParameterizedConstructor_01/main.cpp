// Creating a program to demonstrate an example of parameterized constructor in C++ with CodeBlocks
// Chapter 06 Page no.132

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Point that sores 2 values as co-ordinates
// This class uses parameterized operators
class Point
{
private:
    int first_coordinate, second_coordinate;
public:
    // Inline Parameterized constructor definition
    Point(int first_parameter, int second_parameter)
    {
        first_coordinate = first_parameter;
        second_coordinate = second_parameter;
    }
    void display()
    {
        cout << "(" << first_coordinate << ", " << second_coordinate << ")\n";
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of parameterized constructor in C++ with CodeBlocks\n" << endl;

    // Creating objects and also invoking parameterized constructors
    Point first_point(1, 1);
    Point second_point(5, 10);

    // Displaying the final output
    cout << "The first point will be";
    first_point.display();
    cout << "The second point will be";
    second_point.display();

    return 0;
}
