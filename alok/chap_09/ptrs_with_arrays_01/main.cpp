// Creating program to demonstrate with use of pointers with arrays in C++ with CodeBlocks
// Chap 09  Page no 12

// Preprocessor directives
#include<iostream>
#include<conio.h>

using namespace std;

// Application starts with the main() function
int main()
{
    int number_array[10] = {1,99,4,37,88,3,19,45,62,87};
    int loop_counter,value_to_search,*pointer_to_array;

    /*Assigning the base address of array number_array to pointer_to_array"*/
    pointer_to_array = number_array;

    cout << "Enter the element to be searched: ";
    cin >> value_to_search;

    for(loop_counter=0; loop_counter<10; loop_counter++)
    {
        if(*pointer_to_array == value_to_search) {
        cout << "\n" << value_to_search << " is present in the array";
        break;
    }
    else if(loop_counter == 9)
        cout << "\n" << value_to_search << " is not present in the array";
        //Incrementing the pointer to make it point to the next array element
        pointer_to_array++;
    }
    getch();
}
