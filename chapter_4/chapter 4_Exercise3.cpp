/*
Name: Ilgiz Satkynov
Date: February 03, 2026
exercise: Chapter 4 Exercise 3
Description:
This program calculates an employee's gross pay including overtime.
If more than 40 hours are worked, overtime is paid at 1.5 times the rate.
The program also generates a random document number and prints a report.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string company;
    double hours;
    double rate;
    double grossPay;
    int documentNumber;

    // Seed random number generator
    srand(time(0));

    // Get user input
    cout << "Enter company name: ";
    getline(cin, company);

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter hourly rate: ";
    cin >> rate;

    // Simple input validation (edge cases)
    if (hours < 0 || rate < 0)
    {
        cout << "Invalid input. Hours and rate must be positive numbers." << endl;
        return 0;
    }

    // Calculate gross pay
    if (hours > 40)
    {
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    else
    {
        grossPay = hours * rate;
    }

    // Generate random document number between 1000 and 2000
    documentNumber = rand() % 1001 + 1000;

    cout << fixed << setprecision(2);
    cout << "\nCompany: " << company << endl;
    cout << "Hours: " << hours << endl;
    cout << "Rate: " << rate << endl;
    cout << "Your document number is: " << documentNumber << endl;
    cout << "Your " << company << " gross pay is $" << grossPay << endl;

    return 0;
}