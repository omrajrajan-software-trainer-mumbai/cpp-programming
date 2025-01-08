// Created a debugging folder to find the errors
// Chapter 04 Page No.85

#include <iostream>

using namespace std;

int main()
{
int m = 3, n = 3;
int A[m][n];
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << " ";
             cin >>  A[i][j];
         }
         cout << "\n";
     }

     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << " " << A[i][j];
         }
         cout << "\n";
     }


 }


