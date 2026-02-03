/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 1
Description: Calculates miles per gallon.
*/

#include <iostream>
using namespace std;

int main() {
    double gallons, miles;

    cout << "Enter gallons of gas: ";
    cin >> gallons;

    cout << "Enter miles driven: ";
    cin >> miles;

    cout << "Miles per gallon: " << miles / gallons << endl;
    return 0;
}