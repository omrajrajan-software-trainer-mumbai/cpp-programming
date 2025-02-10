// Creating a program to illustrate the use of this pointer in C++ with CodeBlocks
// Chapter 09 Page no.239

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
    Person & Person ::greater(person &second_person)
    {
        if(second_person.age >= this.age)
            return second_person;
        else
            return *this;
    }
    void display(void)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate the use of this pointer in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    Person p1("John", 37.50);
    Person p2("Ahmad", 29.0);
    Person p3("Hebbber", 40.25);

    //
    Person p = p1.greater(p3);
    cout << "Elder person is: " << endl;
    p.display();


    p = p1.greater(p2);
    cout << "Elder person is: " << endl;
    p.display();

    return 0;
}
