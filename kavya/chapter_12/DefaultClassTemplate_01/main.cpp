// Creating a program to demonstrate how to give default values for function arguments in C++ with CodeBlocks
// Chapter 12 Page no.326

// Preprocessor Directives
#include <iostream>
#include <conio.h>

using namespace std;

// Creating a class template with place-holder and decorator
// Default data types specified as int
template<class T1 = int, class T2 = int>
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
    cout << "Creating a program to demonstrate how to give default values for function arguments in C++ with CodeBlocks\n" << endl;

    // Passing the data types to the class templates
    Test<float, int>test_1(1.23, 123);
    Test<int, char>test_2(100, 'W');
    // declaration of class object without types specification
    Test<>test_3('a', 12.983);

    // Calling the functions
    test_1.show();
    test_2.show();
    /*The parameter values passed by test_3 will  be typecasted to int
    and displayed as output*/
    test_3.show();

    return 0;
}
