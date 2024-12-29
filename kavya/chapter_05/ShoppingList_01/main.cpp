// Creating a program to demonstrate an example of shopping list of items using arrays in C++ with CodeBlocks
// Chapter 05 Page no.100

// Preprocessor Directives
#include <iostream>

using namespace std;

// Defining a global variable
const int size_of_array = 50;

// Creating a class named Items
class Items
{
// These fields cannot be accessed directly by the main() as they are private
private:
    int item_code[size_of_array];
    float item_price[size_of_array];
    int counter;

// These fields or methods can be accessed directly by the main() as they are public
public:
    // This initializes the counter to 0
    void list_counter(void){counter = 0;}
    // Declaring a functions within the class
    void get_item(void);
    void display_sum(void);
    void removes(void);
    void display_items(void);
};

// Defining the function get_item outside the class
// This assigns the value to the data members of item
void Items ::get_item(void)
{
    cout << "Enter item code: ";
    cin >> item_code[counter];
    cout << "Enter item cost: ";
    cin >> item_price[counter];
    counter++;
}

// Defining the function display_sum outside the class
// This displays the total value of all items
void Items ::display_sum(void)
{
   float sum = 0;
   for(int loop_counter = 0; loop_counter < counter; loop_counter++)
   {
       sum += item_price[loop_counter];
   }
   cout << "\nTotal value: " << sum << "\n";
}

// Defining the function removes outside the class
// This deletes a specific item
void Items ::removes(void)
{
    int code;
    cout << "Enter the item code: ";
    cin >> code;

    for(int loop_counter = 0; loop_counter < counter; loop_counter++)
    {
        if(item_code[loop_counter] == code)
        {
            item_price[loop_counter] = 0;
        }
    }
}

// Defining the function display_items outside the class
// This displays the items
void Items ::display_items(void)
{
    cout << "\nCode Price\n";

    for(int loop_counter = 0; loop_counter < counter; loop_counter++)
    {
        cout << "\n" << item_code[loop_counter];
        cout << " " << item_price[loop_counter];
    }
    cout << "\n";
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to demonstrate an example of shopping list of items using arrays in C++ with CodeBlocks\n" << endl;

    // Creating the object
    Items order;
    order.list_counter();
    int option;

    do
    {
        cout << "\nYou can do the following;"
             << "Enter appropriate number \n";
        cout << "\n1 : Add an item";
        cout << "\n2 : Display total value";
        cout << "\n3 : Delete an item";
        cout << "\n4 : Display all items";
        cout << "\n5 : Quit";
        cout << "\n\nWhat is your option?";

        cin >> option;

        switch(option)
        {
            case 1: order.get_item();
            break;
            case 2: order.display_sum();
            break;
            case 3: order.removes();
            break;
            case 4: order.display_items();
            break;
            case 5:
            break;
            default:
                cout << "Error in input; try again\n";
        }
    }while(option != 5);

    return 0;
}
