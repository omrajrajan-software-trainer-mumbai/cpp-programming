// Program to demonstrate  the use of a template class with two generic data types in C++ with CodeBlocks
// chap 12 page no 11

// Preprocessor directive - Includes the iostream library for standard input and output
#include <iostream>

using namespace std;

template < class template_1, class template_2>
class Test
{
    template_1 a;
    template_2 b;

    public:
        Test(template_1 x, template_2 y)
        {
            a = x;
            b = y;
        }
    void show()
    {
        cout << a << " and " << b << "\n";
    }
};

int main()
{
    cout << "Instantiating the class template as test1 with float and int data types..\ntest1: ";
    Test < float,int > test1(1.23, 123);
    test1.show();

    cout << "Instantiating the class template as test2 with int and char data types..\ntest2: ";
    Test < int,char > test2(100, 'W');
    test2.show();

    return 0;
}
