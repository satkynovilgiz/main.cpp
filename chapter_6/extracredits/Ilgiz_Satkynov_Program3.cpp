/*
 * Name: Ilgiz Satkynov
 * Assignment: Chapter 6 - Extra Credit
 * Question: Program #3 - Celsius Temperature Table
 * Description: Uses a function to convert Fahrenheit to Celsius 
 * and displays a conversion table from 0-20 degrees.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
double celsius(double);

int main() 
{
    // Display table headers
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "-----------------------" << endl;

    // Loop from 0 to 20 degrees Fahrenheit
    for (int fTemp = 0; fTemp <= 20; fTemp++) 
    {
        // Call conversion function and display
        cout << fTemp << "\t\t" << fixed << setprecision(2) << celsius(fTemp) << endl;
    }

    return 0;
}

// Function to convert F to C: C = 5/9 * (F - 32)
double celsius(double fahrenheitValue) 
{
    // Ensure decimal division using 5.0 and 9.0
    return (5.0 / 9.0) * (fahrenheitValue - 32.0);
}