// Creating a program to illustrate an example of runtime polymorphism in C++ with CodeBlocks
// Chapter 09 Page no.245

// Preprocessor Directives
#include <iostream>
#include <cstring>

using namespace std;

// Creating a class named Media
class Media
{
// Declaring variables int he protected section of the class
protected:
    char title[50];
    float price;
// Declaring variables or functions in the public section of the class
public:
    // Defining a constructor
    Media(char *name, float cost)
    {
        strcpy(title, name);
        price = cost;
    }
    // Empty virtual function
    virtual void display(){}
};

// Creating a derived class with the base class Media
class Book: public Media
{
// Declaring variables in the private section of the class
private:
    int pages;
// Declaring variables or functions in the public section of the class
public:
    // Defining a constructor
    Book(char *name, float cost, int number_of_pages):Media(name, cost)
    {
        pages = number_of_pages;
    }
    void display();
};
// Creating a derived class with the base class Media
class Tape : public Media
{
// Declaring variables in the private section of the class
private:
    float time;
// Declaring variables or functions in the public section of the class
public:
    Tape(char *name, float cost, float time_consumed):Media(name, cost)
    {
        time = time_consumed;
    }
    void display();
};
void Book ::display()
{
    cout << "\nTitle: " << title << endl;
    cout << "Pages: " << pages << endl;
    cout << "Price: " << price << endl;
}
void Tape ::display()
{
    cout << "\nTitle: " << title << endl;
    cout << "Play Time: " << time << "mins"<< endl;
    cout << "Price: " << price << endl;
}

// The application starts with the main ()
int main()
{
    cout << "Creating a program to illustrate an example of runtime polymorphism in C++ with CodeBlocks" << endl << endl;

    // Variable Declaration and Initialization
    char *name_of_book = new char[30];
    float price_of_book, time_in_minutes;
    int total_pages;

    // Book details
    cout << "\nEnter book details: " << endl;
    cout << "Title: "; cin >> name_of_book;
    cout << "Price: "; cin >> price_of_book;
    cout << "Pages: "; cin >> total_pages;

    // Object Declaration and Initialization
    Book book_details(name_of_book, price_of_book, total_pages);

    // Tape details
    cout << "\nEnter tape details: " << endl;
    cout << "Title: "; cin >> name_of_book;
    cout << "Price: "; cin >> price_of_book;
    cout << "Play Time (in minutes): "; cin >>  time_in_minutes;

    // Object Declaration and Initialization
    Tape tape_details(name_of_book, price_of_book, time_in_minutes);

    Media *list_of_details[2];
    list_of_details[0] = &book_details;
    list_of_details[1] = &tape_details;

    cout << "\nMedia Details: " << endl;
    cout << "......Book......";
    // It displays book details
    list_of_details[0] -> display();

    cout << "......Tape......";
    // It displays book details
    list_of_details[1] -> display();

    return 0;
}
