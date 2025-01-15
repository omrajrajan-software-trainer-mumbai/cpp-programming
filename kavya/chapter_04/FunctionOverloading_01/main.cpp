// Creating a program to demonstrate an example of function overloading in C++ with CodeBlocks
// Chapter 04 Page no.80

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Declaration of function
int area(int);
int area(int, int);
float area(double);

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of function overloading in C++ with CodeBlocks\n" << endl;

    // Calling the area function and pass only one argument of int type
    cout << "Calling the area() function for computing the area of a square (side = 5) :- " << area (5) << "sq.unit \n";
    // Calling the area function and pass two argument of both int type
    cout << "Calling the area() function for computing the area of a rectangle (length = 5, breadth = 10) :- "<< area (5, 10) << "sq.unit \n";
    // Calling the area function and pass only one argument of float type
    cout << "Calling the area() function for computing the area of a circle (radius = 5.5) :- "<< area (5.5) << "sq.unit \n";

    return 0;
}

// Defining the function area() that has one integer parameter i.e area of square
int area(int side)
{
    return (side * side);
}
// Defining the function area() that has two integer parameter i.e area of rectangle
int area(int length, int breadth)
{
    return (length * breadth);
}
// Defining the function area() that has one float parameter i.e area of circle
float area(double radius)
{
    return (3.14 * radius * radius);
}
