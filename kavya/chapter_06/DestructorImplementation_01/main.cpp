// Creating a program to demonstrate the working of Destructors in C++ with CodeBlocks
// Chapter 06 Page no.144

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating and declaring a global variable named counter
int counter = 0;

// Creating a class named test
class test
{
public:
    // Creation and definition of constructor
    test()
    {
        counter++;
        cout << "\n\nConstructor Message : Object number " << counter << " created...";
    }
    // Creation and definition of destructor
    ~test()
    {
        cout << "\nDestructor Message : Object number " << counter << " destroyed...\n";
        counter--;
    }
};

// The application starts with the main ()
int main()
{
    cout << " Creating a program to demonstrate the working of Destructor in C++ with CodeBlocks\n" << endl;

    cout << "Inside the main block..";
    cout << "\n\nCreating the first object tag_1";

    // Object creation and initialization
    test tag_1;

    // This is Block 1
    {
        cout << "\n\nInside Block 1..";
        cout << "Creating two more objects tag_2 and tag_3...";
        test tag_2, tag_3;
        cout << "\n\nLeaving Block 1..";
    }

    cout << "\nBack inside the main block..";

    return 0;
}
