// Program to demonstrate reading and writing class objects in C++ with CodeBlocks
// chap 11  page no 28

// Preprocessor directive
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class INVENTORY
{

    private:
    char name[10];
    int code;
    float cost;

    public:
    void readdata(void);
    void writedata(void);
};

    void INVENTORY :: readdata(void)
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter code: "; cin >> code;
        cout << "Enter cost: "; cin >> cost;
    }

    void INVENTORY :: writedata(void)
    {
        cout << setiosflags(ios::left) << setw(10) << name << setiosflags(ios::right) << setw(10) << code << setprecision(2) << setw(10) << cost << endl;
    }

int main()
{
    cout << "Program to demonstrate reading and writing class objects in C++ with CodeBlocks" << endl;

    INVENTORY item[3];
    fstream file;
    file.open("STOCK.DAT", ios::in | ios::out);
    cout << "ENTER DETAILS FOR THREE ITEMS \n";

    for (int loop_counter = 0; loop_counter < 3; loop_counter++)
    {
        item[loop_counter].readdata();
        file.write((char *) & item[loop_counter],sizeof(item[loop_counter]));
    }
    file.seekg(0);
    cout << "\nOUTPUT\n\n";
    for(int loop_counter = 0; loop_counter < 3; loop_counter++)
    {
        file.read((char *) & item[loop_counter], sizeof(item[loop_counter]));
        item[loop_counter].writedata();
    }
    file.close();

    return 0;
}

