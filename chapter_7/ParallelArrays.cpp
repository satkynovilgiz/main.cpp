// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Description: Copying one array to another based on Chapter 7 slides.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int tests[SIZE] = {79, 82, 91, 77, 84}; // Original array
    int newTests[SIZE];                     // Destination array
s
    // To copy tests to newTests, use a loop (Slide 48)
    for (int i = 0; i < SIZE; i++) {
        newTests[i] = tests[i];
    }

    // Print newTests to verify the copy
    cout << "Contents of the new array: " << endl;
    for (int val : newTests) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}