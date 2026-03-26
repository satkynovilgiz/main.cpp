// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Course: CIS 22A
// Description: Creating an array and finding the highest, lowest, 
// sum, and average values based on Chapter 7 slides.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1. Create and initialize the array
    const int SIZE = 5;
    int numbers[SIZE] = {79, 82, 91, 63, 84};

    // 2. Find the Highest Value (Slide 44)
    int highest = numbers[0]; // Initialize to first element
    for (int count = 1; count < SIZE; count++) {
        if (numbers[count] > highest) {
            highest = numbers[count];
        }
    }

    // 3. Find the Lowest Value (Slide 45)
    int lowest = numbers[0]; // Initialize to first element
    for (int count = 1; count < SIZE; count++) {
        if (numbers[count] < lowest) {
            lowest = numbers[count];
        }
    }

    // 4. Find the Sum and Average (Slide 43)
    double total = 0;
    for (int val : numbers) {
        total += val;
    }
    double average = total / SIZE;

    // Output Results
    cout << fixed << setprecision(2);
    cout << "Array elements: ";
    for (int val : numbers) cout << val << " ";
    
    cout << "\n\nHighest Value: " << highest << endl;
    cout << "Lowest Value:  " << lowest << endl;
    cout << "Total Sum:     " << total << endl;
    cout << "Average:       " << average << endl;

    return 0;
}