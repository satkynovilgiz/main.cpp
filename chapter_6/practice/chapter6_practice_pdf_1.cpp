/*
 * Name: Ilgiz Satkynov
 * Date: February 26, 2026
 * Description: Program 6-2 - Repeatedly calls a function from a loop.
 */

#include <iostream>
using namespace std;

// Function Definition
void displayMessage() {
    cout << "Hello from the function displayMessage.\n";
}

int main() {
    cout << "Hello from main.\n";
    
    // Call the function 5 times
    for (int count = 0; count < 5; count++)
        displayMessage(); 
        
    cout << "Back in function main again.\n";
    return 0;
}