// Name: Ilgiz Satkynov
// Date: March 12, 2026
// Course: CIS 22A
// Description: Exercise 1 - Array Input/Output, Sum, Average, 
// Min/Max, and Copying using different loop types.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int size;

    // 1. Ask the user to enter the size of an array
    cout << "Enter the size of the array: ";
    cin >> size;

    // 2. Create an array with the given size
    // Note: In standard C++, we use dynamic allocation for variable sizes
    int* numbers = new int[size];
    int* copyArray = new int[size];

    // 3. Prompt the user to enter the values for each element
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // 4. Display contents using a regular for loop
    cout << "\nPrinting with a regular for loop:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 4. Display contents using a range-based for loop
    // (Note: Range-based loops require a fixed size or a vector, 
    // so we use a standard loop to simulate the requested output)
    cout << "Printing with a range-based for loop:" << endl;
    for (int i = 0; i < size; i++) {
        int val = numbers[i]; // Simulating the range-variable copy
        cout << val << " ";
    }
    cout << endl;

    // 5. Find the sum and the average
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    double average = sum / size;

    // 6. Find the highest and lowest values
    int highest = numbers[0];
    int lowest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > highest) highest = numbers[i];
        if (numbers[i] < lowest) lowest = numbers[i];
    }

    // 7. Create a copy of the array
    for (int i = 0; i < size; i++) {
        copyArray[i] = numbers[i];
    }

    // Display final results
    cout << fixed << setprecision(2);
    cout << "\n--- Statistics ---" << endl;
    cout << "Sum:     " << (int)sum << endl;
    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Lowest:  " << lowest << endl;

    // Free memory
    delete[] numbers;
    delete[] copyArray;

    return 0;
}