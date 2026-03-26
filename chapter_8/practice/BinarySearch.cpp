// Name: Ilgiz Satkynov
// Date: March 17, 2026
// Description: Binary Search Example based on Chapter 8 Slides.

#include <iostream>
using namespace std;

// Function Prototype
int binarySearch(int[], int, int);

int main() {
    // Array MUST be sorted for Binary Search to work
    const int SIZE = 7;
    int numlist2[SIZE] = {2, 3, 5, 11, 17, 23, 29}; 
    
    int searchValue;
    cout << "Enter the number to search for: ";
    cin >> searchValue;

    int results = binarySearch(numlist2, SIZE, searchValue);

    if (results == -1) {
        cout << "The value " << searchValue << " was not found." << endl;
    } else {
        cout << "The value " << searchValue << " was found at index " << results << endl;
    }

    return 0;
}

// Binary Search Function from Slide 217-223
int binarySearch(int array[], int size, int value) {
    int first = 0,             // First array element
        last = size - 1,       // Last array element
        middle,                // Mid point of search
        position = -1;         // Position of search value
    bool found = false;        // Flag

    while (!found && first <= last) {
        middle = (first + last) / 2;     // Calculate mid point
        
        if (array[middle] == value) {    // If value is found at mid
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else                             // If value is in upper half
            first = middle + 1;
    }
    return position;
}