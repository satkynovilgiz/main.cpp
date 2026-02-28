/*
 * Name: Ilgiz Satkynov
 * Date: February 26, 2026
 * Description: Program 6-20 - Demonstrates how a local variable 
 * shadows the name of a global constant.
 */

#include <iostream>
using namespace std;

// Global constant
const int BIRDS = 500;

void california(); // Prototype

int main() {
    cout << "In main there are " << BIRDS << " birds.\n";
    california();
    return 0;
}

void california() {
    // Local constant shadows the global one
    const int BIRDS = 10000; 
    cout << "In california there are " << BIRDS << " birds.\n";
}