// Creating a program to demonstrate an example of Multilevel Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.192

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Student
class Student
{
protected:
    int roll_number;
public:
    void get_number(int);
    void put_number(void);
};
void Student ::get_number(int roll_no)
{
    roll_number = roll_no;
}
void Student ::put_number(void)
{
    cout << "Roll Number: " << roll_number << "\n";
}
// First level Derivation
class Test :public Student
{
protected:
    float subject_1;
    float subject_2;
public:
    void get_marks(float, float);
    void put_marks(void);
};
void Test ::get_marks(float sub_1, float sub_2)
{
    subject_1 = sub_1;
    subject_2 = sub_2;
}
void Test ::put_marks(void)
{
    cout << "Marks in the first subject are " << subject_1 << "\n";
    cout << "Marks in the second subject are " << subject_2 << "\n";
}

// Second level Derivation
class Result :public Test
{
private:
    float total;
public:
    void display(void);
};
void Result ::display(void)
{
    total = subject_1 + subject_2;
    put_number();
    put_marks();
    cout << "Total Marks obtained are " << total << "\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Multilevel Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    Result student_1;
    // Calling of member functions
    student_1.get_number(111);
    student_1.get_marks(75.0, 59.5);
    student_1.display();

    return 0;
}
