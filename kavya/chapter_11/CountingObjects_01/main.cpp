// Creating a program that counts the number of objects stored in a file C++ with CodeBlocks
// Chapter 11 Page no.304

// Preprocessor Directives
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// Creating a class named Employee
class Employee
{
// Private access modifier
private:
    // Employee name
    char employee_name[30];
    // Employee code
    int employee_code;
// Public access modifier
public:
    // Empty constructor
    Employee(){}
    Employee(char *name, int code)
    {
        strcpy(employee_name, name);
        employee_code = code;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program that counts the number of objects stored in a file C++ with CodeBlocks\n" << endl;

    // Declaring an array of objects
    Employee employee_details[4];
    employee_details[0] = Employee("Amit", 1);
    employee_details[1] = Employee("Joy", 2);
    employee_details[2] = Employee("Rahul", 3);
    employee_details[3] = Employee("Vikas", 4);

    fstream file_handler;
    file_handler.open("EMPLOYEE.exe", ios ::in | ios ::out);

    int loop_counter;
    for(loop_counter = 0; loop_counter < 4; loop_counter++)
    {
        file_handler.write((char *) &employee_details[loop_counter], sizeof(employee_details[loop_counter]));
    }
    file_handler.seekg(0, ios ::end);

    int end_number = file_handler.tellg();

    cout << "Number of objects stored in EMPLOYEE.exe is: " << end_number / sizeof(Employee) << endl;

    return 0;
}
