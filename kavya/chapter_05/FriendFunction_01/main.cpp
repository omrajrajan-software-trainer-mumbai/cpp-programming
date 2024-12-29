// Creating a program to demonstrate an example of a friend function in C++ with CodeBlocks
// Chapter 05 Page no.114

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named sample
class sample
{
    private:
        int first_variable;
        int second_variable;
    public:
        void set_value()
        {
            first_variable = 25;
            second_variable  = 40;
        }
        friend float mean(sample sum);
};

// Defining the friend function
float mean(sample sum)
{
    return float(sum.first_variable + sum.second_variable) / 2.0;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of a friend function in C++ with CodeBlocks\n" << endl;

    // Creating an object named average
    sample average;
    average.set_value();
    cout << "Mean Value = " << mean(average) << "\n";

    return 0;
}
