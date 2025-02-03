// Creating a program to demonstrate an example of Hybrid Inheritance in C++ with CodeBlocks
// Chapter 08 Page no.201

// Preprocessor Directives
#include <iostream>

using namespace std;

// Creating a class named Student
class Student
{
protected:
    int roll_number;
public:
    // Function declaration and definition
    void get_number(int roll_no)
    {
        roll_number = roll_no;
    }
    void put_number(void)
    {
        cout << "Roll No: " << roll_number << endl;
    }
};
// Creating a derived class named Test with public inheritance
class Test : public Student
{
protected:
    float sem1, sem2;
public:
    // Function declaration and definition
    void get_marks(float sem_1, float sem_2)
    {
        sem1 = sem_1;
        sem2 = sem_2;
    }
    void put_marks(void)
    {
        cout << "Marks Obtained: " << endl;
        cout << "Semester 1 = " << sem1 << endl;
        cout << "Semester 2 = " << sem2 << endl;
    }
};
// Creating a class named Sports
class Sports
{
protected:
    float score;
public:
    void get_score(float point)
    {
        score = point;
    }
    void put_score(void)
    {
        cout << "Sports wt: " << score << "\n" << endl;
    }
};
// Creating a derived class Result from two base classes Test and Sports both publicly inherited
class Result : public Test, public Sports
{
private:
    float total;
public:
    // Function Declaration
    void display(void);
};
// Function Definition
void Result ::display(void)
{
    total = sem1 + sem2 + score;

    // Calling the functions of other class
    put_number();
    put_marks();
    put_score();

    // Displaying the final total or output
    cout << "Total Score: " << total << endl;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of Hybrid Inheritance in C++ with CodeBlocks\n" << endl;

    // Object declaration and initialization
    Result student_1;
    student_1.get_number(249001);
    student_1.get_marks(27.5, 33.0);
    student_1.get_score(6.0);
    student_1.display();

    return 0;
}
