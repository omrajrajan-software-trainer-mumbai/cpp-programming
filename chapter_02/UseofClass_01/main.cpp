// Creating a program to demonstrate the use of class in C++ with CodeBlocks
// Chapter 02 Page no.23

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named person
class person
{
    char name[30];
    int age;

    public:
        void get_data(void);
        void display(void);
};

void person :: get_data(void)
{
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
}

void person :: display(void)
{
    cout << "\nName: "<< name;
    cout << "\nAge: "<< age;
}

// The application starts with the main ()
int main()
{
    // Calling the function
    person p;
    p.get_data();
    p.display();

    return 0;

}
