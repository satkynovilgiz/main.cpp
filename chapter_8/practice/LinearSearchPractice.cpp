// Name: Ilgiz Satkynov
// Name: Thai Bao Nguyen - 20685823
// Date: March 17, 2026

// Description: Implementing a Linear Search based on Chapter 8 slides.

#include <iostream>
using namespace std;

// Function Prototype
int linearSearch(int[], int, int);

int main() {
    const int SIZE = 5;
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;
    int searchValue;
    cout << "Enter the test score you are looking for: ";
    cin >> searchValue;

    // Call the linearSearch function 
    results = linearSearch(tests, SIZE, searchValue);

    // If results is -1, the value was not found
    if (results == -1) {
        cout << "That score was not found in the list." << endl;
    } else {
        cout << "That score was found at index " << results << endl;
    }

    return 0;
}

// Function Definition
int linearSearch(int arr[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (arr[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}