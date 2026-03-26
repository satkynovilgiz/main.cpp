/*
 * Name: Ilgiz Satkynov
 * Assignment: Chapter 6 - Extra Credit
 * Question: Program #2 - Kinetic Energy
 * Description: Demonstrates passing values to a function to calculate 
 * the kinetic energy of a moving object.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
double kineticEnergy(double, double);

int main() 
{
    double userMass;      // Input for mass
    double userVelocity;  // Input for velocity

    // Get user input for mass and velocity
    cout << "Enter the object's mass (in kg): ";
    cin >> userMass;
    cout << "Enter the object's velocity (in m/s): ";
    cin >> userVelocity;

    // Call the function and output result with formatting
    cout << fixed << setprecision(2);
    cout << "The kinetic energy is: " << kineticEnergy(userMass, userVelocity) << " Joules" << endl;

    return 0;
}

// Function to calculate KE = 1/2 * m * v^2
double kineticEnergy(double mass, double velocity) 
{
    // Calculate and return energy using camelCase variable
    double kEnergy = 0.5 * mass * (velocity * velocity);
    return kEnergy;
}