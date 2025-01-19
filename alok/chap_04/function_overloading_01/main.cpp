// Creating a program to illustrates function overloading in C++ with CodeBlocks
// Chapter 04 Page no.20

#include <iostream>

using namespace std;

// Declarations (prototypes)

int volume(int);
double volume(double, int);
long volume(long, int, int);

// Application starts with the main() function
int main( )
{
        cout<<“Calling the volume( ) function for computing the volume of a cube - “<<volume(10)<<“\n”;

        cout<<“Calling the volume( ) function for computing the volume of a cylinder - “<<volume(2.5,8)<<“\n”;

        cout<<“Calling the volume( ) function for computing the volume of a rectangular box - “<<volume(100L,75,15); return 0;
}

// Function definitions
// cube
int volume(int s)
{
    return(s* s* s);
}

// cylinder
double volume(double r, int h)
{
    return(3.14519*r*r*h);
}

// rectangular box
long volume(long l, int b, int h)
{
    return (l*b*h);
}
