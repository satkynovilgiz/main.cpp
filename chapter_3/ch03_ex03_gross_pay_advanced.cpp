// Name: Ilgiz Satkynov
// Assignment: Chapter 3 - Exercise 3
// Description: This program calculates an employee’s gross pay,.

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const double TAX_RATE = 0.12;
    const int MIN_DOC = 1000;
    const int MAX_DOC = 2000;

    string companyName;
    int hours;
    double rate;
    double grossPay;
    double taxAmount;
    double netPay;

    srand(time(0));
    int documentNumber = rand() % (MAX_DOC - MIN_DOC + 1) + MIN_DOC;

    cout << "Enter company name: ";
    getline(cin, companyName);

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter hourly pay rate: ";
    cin >> rate;

    grossPay = hours * rate;
    taxAmount = grossPay * TAX_RATE;
    netPay = grossPay - taxAmount;

    double avgPayPerHour = grossPay / static_cast<double>(hours);

    cout << fixed << setprecision(2) << showpoint;

    cout << endl;
    cout << "Company Name: " << companyName << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Hourly Rate: $" << rate << endl;
    cout << "Document Number: " << documentNumber << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Net Pay: $" << netPay << endl;
    cout << "Average Pay Per Hour: $" << avgPayPerHour << endl;

    return 0;
}

