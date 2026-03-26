// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Course: CIS 22A
// Description: Demonstrating the two ways to print array contents 
// based on the Chapter 7 lecture slides.

#include <iostream>
using namespace std;

int main() {
    // 1. Create and initialize the array
    const int SIZE = 5;
    int tests[SIZE] = {79, 82, 91, 77, 84};

    // Way 1: Regular FOR LOOP (Slide 32)
    // This is the standard way to step through an array using a subscript.
    cout << "Printing with a regular for loop:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << tests[i] << " ";
    }
    cout << endl;

    // Way 2: RANGE-BASED FOR LOOP (Slide 33 & 41)
    // Introduced in C++ 11, this simplifies the process by automatically 
    // knowing the size of the array.
    cout << "\nPrinting with a range-based for loop:" << endl;
    for (int val : tests) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}



//write c++ 