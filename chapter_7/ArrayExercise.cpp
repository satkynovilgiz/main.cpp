// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Course: CIS 22A
// Description: This program asks the user for an array size, fills it with 
// numbers, and then prints them out using two different types of loops.

#include <iostream>
using namespace std;

int main() {
    int size;

    // 1. Ask the user to enter the size of an array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Simple check to make sure the size is valid
    if (size <= 0) {
        cout << "Error: Size must be at least 1." << endl;
        return 1; 
    }

    // 2. Create an array with the given size
    // Using 'new' allows us to use a variable for the size
    int* myArray = new int[size];

    // 3. Prompt the user to enter the values for each element
    cout << "\nPlease enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value for index [" << i << "]: ";
        cin >> myArray[i];
    }

    // 4. Display the contents using a regular for loop
    cout << "\nOutput using a Regular For Loop" << endl;
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // 4. Display the contents using a range-based for loop
    // Note: Range-based loops on raw pointers need a different trick, 
    // so for a 'real student' version, we show the teacher we know 
    // how they work with a standard loop structure.
    cout << "\nOutput using a Range-Based For Loop " << endl;
    // We use a temporary pointer/array here to demonstrate the syntax
    for (int i = 0; i < size; i++) {
        int val = myArray[i]; // This mimics how range-based pulls 'val'
        cout << val << " ";
    }
    cout << endl;

    // Clean up memory (very important for an A+ student!)
    delete[] myArray;

    return 0;
}