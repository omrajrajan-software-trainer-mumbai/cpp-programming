// Creating a program that demonstrates how to update file in C++ with CodeBlocks
// Chapter 11 Page no.306

// Preprocessor Directives
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Creating a class named Inventory
class Inventory
{
// Private access modifier
private:
    // Item name
    char name[10];
    // Item code
    int code;
    // Cost of each item
    float cost;
// Public access modifier
public:
    // Function to get data
    // Input from user
    void get_data(void)
    {
    cout << "Enter name: "; cin >> name;
    cout << "Enter code: "; cin >> code;
    cout << "Enter cost: "; cin >> cost;
    }
    // Function to put data
    // Displaying the input in formatted manner
    void put_data(void)
    {
        cout << setw(10) << name
            << setw(10) << code
            << setprecision(2) << setw(10) << setw(10) << cost
            << endl;
    }
};

// The application starts with the main ()
int main()
{
    cout << "Creating a program that demonstrates how to update file in C++ with CodeBlocks\number_of_objects" << endl;

    // Object Declaration
    Inventory item;
    // Input and Output stream
    fstream file_handler;

    file_handler.open("STOCK.exe", ios ::ate | ios ::in | ios ::out | ios::binary);
    // Goes to start
    file_handler.seekg(0, ios ::beg);

    cout << "CURRENT CONTENTS OF STOCK" << endl;
    // turn off EOF flag
    file_handler.clear();

    cout << "\nADD AN ITEM\n";
    item.get_data();

    while(file_handler.read((char *) &item, sizeof(item)))
          {
              item.put_data();
          }

       char character;
       cin.get(character);
       file_handler.write((char *) & item, sizeof item);
       // Display the appended file
       // go to the start
       file_handler.seekg(0);
       cout << "CONTENTS OF APPENDED FILE \n";
       while(file_handler.read((char *) & item, sizeof item))
       {
           item.put_data();
       }
       // Find number of objects in the file
       int last = file_handler.tellg();
       int number_of_objects = last/sizeof(item);

       cout << "Number of objects = " << number_of_objects << "\n";
       cout << "Total bytes in the file = " << last << "\n";

       cout << "Enter object number to be updated \n";
       int object;
       cin >> object;

       cin.get(character);

       int location = (object-1) * sizeof(item);

       if(file_handler.eof())
       {
            file_handler.clear();
       }

       file_handler.seekp(location);

       cout << "Enter new values of the object \n";
       item.get_data();
       cin.get(character);
       file_handler.write((char *) & item, sizeof item) << flush;

       //go to the start
        file_handler.seekg(0);

       cout << "CONTENTS OF UPDATED FILE \n";
       while(file_handler.read((char *) & item, sizeof item))
       {
           item.put_data();
       }
       file_handler.close();

    return 0;
}
