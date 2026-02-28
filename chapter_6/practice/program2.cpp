/*
 * Name: Ilgiz Satkynov
 * Date: February 26, 2026
 * Description: Program 6-9 - Demonstrates that changes to a function 
 * parameter have no effect on the original argument.
 */

#include <iostream>
using namespace std;

void changeMe(int); // Prototype

int main() {
    int number = 12;
    cout << "number is " << number << endl;

    changeMe(number); // Passing the value

    cout << "Now back in main again, the value of number is " << number << endl;
    return 0;
}

void changeMe(int myValue) {
    myValue = 0; // Only changes the local copy
    cout << "Now the value is " << myValue << endl;
}