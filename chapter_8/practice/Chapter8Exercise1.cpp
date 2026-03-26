// Name: Ilgiz Satkynov
// Date: March 19, 2026
// Description: This program allows a user to enter an array of integers, 
// sort them using Bubble or Selection Sort, and search for a target value 
// using Linear or Binary Search.

#include <iostream>
using namespace std;

// --- Function Prototypes ---
void showValues(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main() {
    int size, sortChoice, searchChoice, target, result;

    // 1. Prompt for array size [cite: 10]
    cout << "How many elements in the array? ";
    cin >> size;

    // Allocate array dynamically
    int* numbers = new int[size];

    // 2. Ask for array elements using a for loop [cite: 10]
    for (int i = 0; i < size; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // 3. Display unsorted array [cite: 10]
    cout << "Unsorted array: ";
    showValues(numbers, size);

    // 4. Choose sort algorithm [cite: 10]
    cout << "\nChoose sort method:\n1. Selection Sort\n2. Bubble Sort\n> ";
    cin >> sortChoice;

    if (sortChoice == 1) {
        selectionSort(numbers, size);
    } else {
        bubbleSort(numbers, size);
    }

    // 6. Display sorted array [cite: 10]
    cout << "Sorted array: ";
    showValues(numbers, size);

    // 7. Ask for target value [cite: 10]
    cout << "\nEnter a value to search for: ";
    cin >> target;

    // 8. Choose search algorithm [cite: 10]
    cout << "Choose search method:\n1. Linear Search\n2. Binary Search\n> ";
    cin >> searchChoice;

    if (searchChoice == 1) {
        result = linearSearch(numbers, size, target);
    } else {
        result = binarySearch(numbers, size, target);
    }

    // 9. Show the index or a not found message [cite: 10]
    if (result != -1) {
        cout << "Value found at index " << result << endl;
    } else {
        cout << "Sorry, that value was not found in the array." << endl;
    }

    // Clean up
    delete[] numbers;
    return 0;
}

// --- Helper Functions ---

// Function to print array contents [cite: 10]
void showValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Bubble Sort: Swaps adjacent elements if out of order [cite: 225, 226]
void bubbleSort(int arr[], int size) {
    int temp;
    bool swap;
    do {
        swap = false;
        for (int i = 0; i < (size - 1); i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

// Selection Sort: Finds smallest element and moves it to the front [cite: 271, 272]
void selectionSort(int arr[], int size) {
    int minIndex, minValue;
    for (int start = 0; start < (size - 1); start++) {
        minIndex = start;
        minValue = arr[start];
        for (int i = start + 1; i < size; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
                minIndex = i;
            }
        }
        arr[minIndex] = arr[start];
        arr[start] = minValue;
    }
}

// Linear Search: Checks elements one by one [cite: 178, 179]
int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return i;
    }
    return -1;
}

// Binary Search: Divides sorted array in half repeatedly [cite: 215, 216]
int binarySearch(int arr[], int size, int value) {
    int first = 0, last = size - 1, middle;
    while (first <= last) {
        middle = (first + last) / 2;
        if (arr[middle] == value) return middle;
        else if (arr[middle] > value) last = middle - 1;
        else first = middle + 1;
    }
    return -1;
}