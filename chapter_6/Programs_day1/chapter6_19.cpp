/*
 * Name: Ilgiz Satkynov
 * Date: February 26, 2026
 * Class: CIS D022A
 * Description: Program 6-19 - This program calculates gross pay. 
 * It uses Global Constants for values that do not change, 
 * like pay rates and overtime multipliers.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Global constants - Defined outside of all functions
// These can be accessed by any function in the program.
const double PAY_RATE = 22.55;       // Hourly pay rate
const double BASE_HOURS = 40.0;      // Max non-overtime hours
const double OT_MULTIPLIER = 1.5;    // Overtime multiplier

// Function prototypes
double getBasePay(double);
double getOvertimePay(double);

int main()
{
    double hours,      // Hours worked
           basePay,    // Base pay
           overtime = 0.0, // Overtime pay
           totalPay;   // Total pay

    // Get the number of hours worked
    cout << "How many hours did you work? ";
    cin >> hours;

    // Calculate the base pay
    basePay = getBasePay(hours);

    // Calculate overtime pay if applicable
    if (hours > BASE_HOURS)
        overtime = getOvertimePay(hours);

    // Calculate total pay
    totalPay = basePay + overtime;

    // Set up numeric output formatting
    cout << setprecision(2) << fixed << showpoint;

    // Display the results
    cout << "Base pay: $" << basePay << endl;
    cout << "Overtime pay: $" << overtime << endl;
    cout << "Total pay: $" << totalPay << endl;

    return 0;
}

// Definition of function getBasePay.                      *
// Calculates and returns base pay based on global PAY_RATE*
double getBasePay(double hoursWorked)
{
    double base;

    if (hoursWorked > BASE_HOURS)
        base = BASE_HOURS * PAY_RATE;
    else
        base = hoursWorked * PAY_RATE;

    return base;
}

// Definition of function getOvertimePay.                  *
// Calculates and returns overtime pay using global values. *
double getOvertimePay(double hoursWorked)
{
    double otPay;

    otPay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;

    return otPay;
}

