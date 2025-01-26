// Program to create a function to solve Tower of Hanoi problem recursively in C++ with CodeBlocks

#include <iostream>

using namespace std;

// Function to solve Tower of Hanoi problem recursively
// Parameters:
// number_of_disks: Number of disks to move
// source: The rod from which disks need to be moved
// destination: The rod to which disks need to be moved
// auxiliary: The rod used as an intermediate for the process

void towerOfHanoi(int number_of_disks, char source, char destination, char auxiliary)
{
    // Base case: If there is only one disk, move it directly from source to destination
    if (number_of_disks == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move number_of_disks-1 disks from source to auxiliary using destination as an intermediate
    towerOfHanoi(number_of_disks - 1, source, auxiliary, destination);

    // Step 2: Move the nth (largest) disk directly from source to destination
    cout << "Move disk " << number_of_disks << " from " << source << " to " << destination << endl;

    // Step 3: Move the number_of_disks-1 disks from auxiliary to destination using source as an intermediate
    towerOfHanoi(number_of_disks - 1, auxiliary, destination, source);
}

int main()
{
    cout << "Program to create a function to solve Tower of Hanoi problem recursively in C++ with CodeBlocks" << endl << endl;
    // Number of disks
    int number_of_disks;

    // Prompt the user to enter the number of disks
    cout << "Enter the number of disks: ";
    cin >> number_of_disks;

    // Explanation: The rods are named A, B, and C for simplicity
    // A: Source rod where all disks are initially stacked
    // C: Auxiliary rod used for intermediate steps
    // B: Destination rod where all disks need to be moved

    cout << "The sequence of moves to solve the Tower of Hanoi with " << number_of_disks << " disks is: " << endl;

     // Call the recursive function to solve the problem
    towerOfHanoi(number_of_disks, 'S', 'D', 'A');

    return 0; // Indicate that the program ended successfully
}


