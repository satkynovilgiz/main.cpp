// Name: Ilgiz Satkynov
// Date: Feb 13, 2026
// Course: CIS 22A
// Assignment: Chapter 5 - Exercise 2
// Description: This program calculates gross pay with input validation and 
// writes a formatted report to both the console and an output text file.

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream> // REQUIRED for file output

using namespace std;

int main() {
    // Variables
    string employer;
    double hoursWorked, hourlyRate, totalPay;
    int receiptID;

    // File object
    ofstream outFile("pay_report.txt");

    // Seed random number generator
    srand(time(0));

    // 1. INPUT & VALIDATION
    cout << "Please enter the number of hours worked: ";
    cin >> hoursWorked;
    while (hoursWorked < 0) {
        cout << "Error: Hours cannot be negative. Re-enter: ";
        cin >> hoursWorked;
    }

    


    cout << "Please enter the hourly pay rate: ";
    cin >> hourlyRate;
    cout << "Please enter the hourly pay rate: ";
    cin >> hourlyRate;
    while (hourlyRate <= 0) {
        cout << "Error: Pay rate must be a positive number. Re-enter: ";
        cin >> hourlyRate;
    }

    cin.ignore();
    cout << "Enter the name of your company: ";
    getline(cin, employer);

    // 2. LOGIC
    receiptID = rand() % 1001 + 1000;

    if (hoursWorked > 40) {
        double regularPay = 40 * hourlyRate;
        double overtimeHours = hoursWorked - 40;
        double overtimePay = overtimeHours * (hourlyRate * 1.5);
        totalPay = regularPay + overtimePay;
    } else {
        totalPay = hoursWorked * hourlyRate;
    }

    // 3. OUTPUT TO SCREEN (cout)
    cout << fixed << setprecision(2);
    cout << "\n--- Payroll Summary ---" << endl;
    cout << "Company Name: " << employer << endl;
    cout << "Total Hours:  " << hoursWorked << endl;
    cout << "Hourly Rate:  $" << hourlyRate << endl;
    cout << "Document ID:  #" << receiptID << endl;
    cout << "-----------------------" << endl;
    cout << "The gross pay for " << employer << " is $" << totalPay << endl;
    cout << "Thank you for your hard work!" << endl;

    // 4. OUTPUT TO FILE (outFile)
    // We check if the file opened correctly first
    if (outFile.is_open()) {
        outFile << fixed << setprecision(2);
        outFile << "--- Payroll Summary ---" << endl;
        outFile << "Company Name: " << employer << endl;
        outFile << "Total Hours:  " << hoursWorked << endl;
        outFile << "Hourly Rate:  $" << hourlyRate << endl;
        outFile << "Document ID:  #" << receiptID << endl;
        outFile << "-----------------------" << endl;
        outFile << "The gross pay for " << employer << " is $" << totalPay << endl;
        outFile << "Thank you for your hard work!" << endl;
        
        outFile.close(); // Always close the file!
        cout << "\nReport has been successfully saved to pay_report.txt" << endl;
    } else {
        cout << "Error: Could not create the output file." << endl;
    }

    return 0;
}