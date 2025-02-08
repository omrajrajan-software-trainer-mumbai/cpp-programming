// Creating a program to illustrate the use of this pointer in C++ with CodeBlocks
// Chapter 09 Page no.28

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named Person
class Person
{
private:
    char name[20];
    float age;
public:
    Person(char *name_string, float age_variable)
    {
        strcpy(name, name_string);
        age = age_variable;
    }
    Person & Person :: greater(person & x)

};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the use of this pointer in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    return 0;
}
