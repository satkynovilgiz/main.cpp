// Author: Ilgiz Satkynov
// Date: January 15, 2026
// Program: Rectangle Area & Perimeter Calculator
//
// This program calculates the area and perimeter of a rectangle
// using named constants for length, width, and the number 2.
// It also displays the size of a double in bytes.

#include <iostream>
using namespace std;

int main() {
    const int TWO = 2;

    const double LENGTH = 12.5; // Length of rectangle
    const double WIDTH  = 8.3;  // Width of rectangle
    double area;
    double perimeter;

    area = LENGTH * WIDTH;
    perimeter = TWO * (LENGTH + WIDTH);

    cout << "Rectangle Calculator" << endl;
    cout << "Length: " << LENGTH << endl;
    cout << "Width: " << WIDTH << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}