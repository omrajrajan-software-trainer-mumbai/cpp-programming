// Creating a program to demonstrate the use of a template class with two generic data types in C++ with CodeBlocks
// Chapter 12 Page no.325

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a class template with place-holder and decorator
template<class T1, class T2>
class Test
{
// Private access modifier
private:
   // Variables of type T1 and T2
    T1 first_variable;
    T2 second_variable;
// Public access modifier
public:
    // Parameterized Constructor
    Test(T1 template_variable_1, T2 template_variable_2)
    {
        first_variable = template_variable_1;
        second_variable = template_variable_2;
    }
    void show(void)
    {
        cout << first_variable << " and " << second_variable << endl;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate the use of a template class with two generic data types in C++ with CodeBlocks\n" << endl;

    // Passing the data types to the class templates
     cout<<"Instantiating the class template as 'test_1' with float and int data types..\ntest1: ";
     Test<float, int>test_1(1.23, 123);
     test_1.show();

     cout<<"Instantiating the class template as 'test_2' with int and char data types..\ntest2: ";
     Test<int, char>test_2(100, 'W');
     test_2.show();

    return 0;
}
