/*
 * Name: Ilgiz Satkynov
 * Assignment: Chapter 6 - Extra Credit
 * Question: Program #1 - Falling Distance
 * Description: Calculates the distance an object falls over 1-10 seconds 
 * using a function.
 */

#include <iostream>
#include <iomanip>
#include <cmath> // For the pow function
using namespace std;

// Function Prototype
double fallingDistance(int);

int main() 
{
    // Display table headers
    cout << "Time (s)\tFalling Distance (m)" << endl;
    cout << "------------------------------------" << endl;

    // Loop through 1 to 10 seconds
    for (int t = 1; t <= 10; t++) 
    {
        // Call function and display result formatted
        cout << t << "\t\t" << fixed << setprecision(2) << fallingDistance(t) << endl;
    }

    return 0;
}

// Function definition to calculate d = 1/2 * g * t^2
double fallingDistance(int seconds) 
{
    const double gravityConstant = 9.8; // Gravity on Earth
    // Calculate and return the distance
    return 0.5 * gravityConstant * pow(seconds, 2);
}