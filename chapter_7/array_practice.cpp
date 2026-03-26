// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Description: Practice creating and printing an array using 
// regular for loops and range-based for loops.

#include <iostream>
using namespace std;

int main() {
    // 1. Create and initialize the array
    // Based on slide 19: "Array Initialization"
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};

    // 2. Print using a regular FOR LOOP
    // Based on slide 32: "Printing the Contents of an Array"
    cout << "Printing with a regular for loop:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 3. Print using a RANGE-BASED FOR LOOP
    // Based on slide 33: "Printing the Contents of an Array" (C++ 11)
    cout << "\nPrinting with a range-based for loop:" << endl;
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}