// Creating a program to illustrate the use of this pointer in C++ with CodeBlocks
// Chapter 09 Page no.28

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named Person
class person
{
    char name[20];
    float age;
    public:
        // Special method - constructor
        // Same name as class and no return type
        // Use to automatically initialize fields of a class
        // Automatically called on creation of each object of the class
        person(char *s, float a)
        {
            strcpy(name, s);
            age = a;
        }
        person & person :: greater(person & x)
        {
            if(x.age >= age)
            return x;

            else
            return *this;
        }
        void display(void)
        {
            cout << "Name: " << name << "\n" << "Age: " << age << "\n";
        }
};

int main()
{
    person person_1("John", 37.50),person_2("Ahmed", 2 9.0),person_3("Hebber", 40.25);

    // person_3.greater(person_1)
    person P = person_1.greater(person_3);
    cout << "Elder person is: \n";
    P.display();

    // person_2.greater(person_1)
    P = person_1.greater(person_2);
    cout << "Elder person is: \n";
    P.display();

    return 0;
}
