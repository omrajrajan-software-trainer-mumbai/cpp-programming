// Creating a program to demonstrate an example of using objects as arguments in C++ with CodeBlocks
// Chapter 05 Page no.111

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named time
class Time
{
private:
    int hours;
    int minutes;
public:
    void get_time(int hour_parameter, int minute_parameter)
    {
        hours = hour_parameter;
        minutes = minute_parameter;
    }
    void put_time(void)
    {
        cout << hours << "hours and ";
        cout << minutes << "minutes \n";
    }
    // Function declaration with objects as arguments
    void sum(Time, Time);
};

// Defining the function sum()
// Here time_1 and time_2 are objects
void Time ::sum(Time time_1, Time time_2)
{
    minutes = time_1.minutes + time_2.minutes;
    hours = minutes / 60;

}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of using objects as arguments in C++ with CodeBlocks\n" << endl;
    return 0;
}
