// Program to demonstrate the average of two numbers in C++ with CodeBlocks
// chap 02 page no 11

//Preprocessor directives
#include<iostream>

using namespace std;

// Application starts with the main() function
int main()
{
    private:
        char name[30];
        int age;

    public:
        void getdata(void);
        void display(void);
};

void person :: getdata(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void person :: display(void)
{
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
}

int main()
{
    person p;

    p.getdata();
    p.display();

    return 0;
}
