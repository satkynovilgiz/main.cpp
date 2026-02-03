// Name: Ilgiz Satkynov
// Assignment: Chapter 3 - Exercise 2

/*
Part 1 - Design

This program collects:
- Age (int) because age is a whole number
- GPA (double) because GPA can have decimals
- First initial (char) because it is one letter 
*/

/*
Part 2 - Prediction

If the user enters a letter for age:
cin will fail because age expects a number.

If the user enters 3 instead of 3.5 for GPA:
The program will still work and store it as 3.0.
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    double gpa;
    char firstInitial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter your first initial: ";
    cin >> firstInitial;

    cout << endl;
    cout << "Student Information Summary" << endl;
    cout << "---------------------------" << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "First Initial: " << firstInitial << endl;

    return 0;
}

/*
Part 4 - Debug Scenario

Test input:
20 A 3.7

What goes wrong:
The program tries to store 'A' in the GPA variable.

Which variable causes the issue:
The GPA variable (double).

Where the problem happens:
During input when cin reads the GPA.
*/

/*
Part 5 - Reflection

This exercise shows that computers read input in order and expect the
correct data type. If the user enters the wrong type, the program
does not work correctly. This is why input order and data types matter.
*/