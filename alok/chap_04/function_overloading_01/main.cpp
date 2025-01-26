// Creating a program to illustrates function overloading in C++ with CodeBlocks
// Chapter 04 Page no.20

#include <iostream>

using namespace std;

// Function Declarations (prototypes)
int volume(int);
double volume(double, int);
long volume(long, int, int);

// Application starts with the main() function
int main( )
{
    cout << "Creating a program to illustrates function overloading in C++ with CodeBlocks" << endl << endl;
    // Function Calling
    cout << "Calling the volume() function for computing the volume of a cube - " << volume(10) << endl;
    cout << "Calling the volume() function for computing the volume of a cylinder - " << volume(2.5,8) << endl;
    cout << "Calling the volume() function for computing the volume of a rectangular box - " << volume(100L,75,15) << endl;

    return 0;
}

// Function definition: Using the overloaded volume() to find out volume of a cube
int volume(int lenght_of_side)
{
    return(lenght_of_side * lenght_of_side * lenght_of_side);
}

// Function definition: Using the overloaded volume() to find out volume of a cylinder
double volume(double radius, int height)
{
    return(3.14519 * radius * radius * height);
}

// Function definition: Using the overloaded volume() to find out volume of a rectangular
long volume(long length, int breath, int height)
{
    return (length * breath * height);
}
