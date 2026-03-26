// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Course: CIS 22A
// Description: Array practice: Initialization, printing (for vs range-based), 
// and calculating sum/average based on Chapter 7 slides.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1. Create and initialize the array (Slide 19)
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};

    // 2. Print using a regular FOR LOOP (Slide 32)
    cout << "Way 1: Regular for loop" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 2. Print using a RANGE-BASED FOR LOOP (Slide 33)
    cout << "\nWay 2: Range-based for loop" << endl;
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    // 3. Find the Sum and Average (Slide 43/44)
    double total = 0; // Accumulator initialized to 0
    double average;

    for (int val : numbers) {
        total += val;
    }

    average = total / SIZE;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nTotal Sum: " << total << endl;
    cout << "Average:   " << average << endl;

    return 0;
}

