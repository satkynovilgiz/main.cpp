/*
Name: Ilgiz Satkynov
date: February 26, 2026
Class: CIS D022A
Description: Program 6-15 - This program demonstrates a function 
that returns a Boolean value (true or false) to 
determine if an integer is even or odd.
 */

#include <iostream>
using namespace std;

// Function prototype
bool isEven(int);

int main()
{
    int val;

    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;

    // Indicate whether it is even or odd.
    // The if statement uses the boolean return value directly
    if (isEven(val))
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";

    return 0;
}

// Definition of function isEven.                          
// This function accepts an integer argument and returns   
// true if the argument is even, otherwise false.          
bool isEven(int number)
{
    bool status;

    if (number % 2 == 0)
        status = true;  // The number is even
    else
        status = false; // The number is odd

    return status;
}