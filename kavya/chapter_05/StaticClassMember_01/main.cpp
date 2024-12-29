// Creating a program to demonstrate an example of static class members in C++ with CodeBlocks
// Chapter 05 Page no.105

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class name item
class item
{
// These fields cannot be accessed directly by the main() as they are private
private:
    static int counter;
    int number;
// These fields or methods can be accessed directly by the main() as they are public
public:
    // Creating a function named get_data
    void get_data(int first_parameter)
    {
        int number = first_parameter;
        counter++;
    }
    // Creating another function named get_count
    void get_count(void)
    {
        cout << "Count: ";
        cout << counter << "\n";
    }
};

// Declaring the static variable using scope resolution operator
int item :: counter;

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of static class members in C++ with CodeBlocks\n" << endl;

    // Declaring the object
    item first_object, second_object, third_object;

    // Calling the methods using the object
    // The counter is initialized to 0
    first_object.get_count();
    second_object.get_count();
    third_object.get_count();

    // Getting data into objects
    first_object.get_data(100);
    second_object.get_data(200);
    third_object.get_data(300);

    cout << "After reading data" << "\n";

    // Displaying count
    first_object.get_count();
    second_object.get_count();
    third_object.get_count();

    return 0;
}
