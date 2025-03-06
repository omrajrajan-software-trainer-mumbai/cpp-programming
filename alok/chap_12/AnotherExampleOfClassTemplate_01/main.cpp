// Program to demonstrate the use of a vector class template in C++ with CodeBlocks
// chap 12 page no 06

// Preprocessor directive - Includes the iostream library for standard input and output
#include <iostream>

using namespace std;

const int size = 3; // Defining a constant size for the vector

// Template class definition for creating generic vector objects
template <class T>
class vector
{
    T* vect;
public:
    vector()
    {
        vect = new T[size];
        for(int loop_counter=0;loop_counter<size;loop_counter++)
        vect[loop_counter] = 0;
    }
    vector(T* a)
    {
        vect = new T[size];
        for(int loop_counter=0;loop_counter<size;loop_counter++)
        vect[loop_counter] = a[loop_counter];
    }
    T operator*(vector &array_2)
    {
        T sum = 0;
        for(int loop_counter=0;loop_counter<size;loop_counter++)
        {
            sum += this -> vect[loop_counter] * array_2.vect[loop_counter];
        }
        return sum;
    }

    void display(void)
    {
        for(int loop_counter=0;loop_counter<size;loop_counter++)
        {
            cout<<vect[loop_counter]<<"\t";
        }
        cout<<"\n";
    }
};
int main()
{
    cout << "Program to demonstrate the use of a vector class template in C++ with CodeBlocks" << endl << endl;

    float array_1[3] = {1.1,2.2,3.3};
    float array_2[3] = {4.4,5.5,6.6};

    vector <float> vector_1(array_1);
    vector <float> vector_2(array_2);

    cout<<"vector_1 = ";
    vector_1.display();

    cout<<"vector_2 = ";
    vector_2.display();

    cout<<"vector_1 X vector_2 = "<<vector_1*vector_2;

    return 0;
 }
