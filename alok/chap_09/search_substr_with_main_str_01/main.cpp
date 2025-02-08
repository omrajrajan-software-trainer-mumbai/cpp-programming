// Creating a program to search substring with main string in C++ with CodeBlocks
// Chap 09 Page no 16

// Preprocessor directives
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

// Application starts with the main() function
void main()
{
    int inner_loop_counter, outer_loop_counter;
    char string_to_search[] − "\nC++ is better than C”;
    int len − strlen(string_to_search);
    char *substr − new char[len];
    cout<<"The main string is: ” << string_to_search ;
    cout<<"\n\nEnter the substring to be searched: ”;
    cin>>substr;
    int temporary_counter,len2=strlen(substr);
    for(inner_loop_counter=0;inner_loop_counter<len;inner_loop_counter++)
    {
        temporary_counter=inner_loop_counter;
        for(outer_loop_counter=0;outer_loop_counter<len2;outer_loop_counter++)
        {
        if(string_to_search[temporary_counter]==substr[outer_loop_counter])
        {
        if(outer_loop_counter==len2-1) {
        cout<<"\nThe substring is present in the main
        string”;
        getch( );
        exit(0);
    }
    temporary_counter++;
    }
    else
    break;
    }
    }
    if(inner_loop_counter==len)
    cout<<"\nThe substring is not present in the main string”;
    getch( );
    }
