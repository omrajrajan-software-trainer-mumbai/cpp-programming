// Program to demonstrate input and output operations on binary files in C++ with CodeBlocks
// chap 11  page no 26

// Preprocessor directive
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Application starts with the main() function
int main()
{
    cout << "Program to demonstrate input and output operations on binary files in C++ with CodeBlocks" << endl;

    float height[4] = {175.5,153.0,167.25,160.70};
    ofstream outfile;
    outfile.open(filename);
    outfile.write((char *) & height, sizeof(height));
    outfile.close();

    for(int loop_counter=0; loop_counter<4; loop_counter++)
    height[loop_counter] = 0;
    ifstream infile;
    infile.open(filename);
    infile.read((char *) & height, sizeof(height));

    for(loop_counter=0; loop_counter<4; loop_counter++)
    {
        cout.setf(ios::showpoint);
        cout << setw(10) << setprecision(2) << height[loop_counter];
    }
    infile.close();

    return 0;
}
