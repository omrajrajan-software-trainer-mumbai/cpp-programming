// Program to demonstrate the average of two numbers in C++ with CodeBlocks
// chap 02 page no 11

//Preprocessor directives
#include<iostream>

using namespace std;

// Application starts with the main() function
int main()
 {
    float numberl, number2, sum, average;
    cout << "Enter two numbers: ";

    cin >> numberl;
    cin >> number2;

    sum = numberl + number2;
    average = sum/2;

    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
 }
