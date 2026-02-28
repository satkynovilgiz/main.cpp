// // Name: Ilgiz Satkynov
// // Date: Feb 13, 2026
// // Course: CIS 22A
// // Assignment: Chapter 5 - Exercise 1
// // Description: This program takes user input for hours and pay rate, 
// // validates that the numbers aren't negative, and then calculates 
// // the total gross pay including time-and-a-half for overtime.

// #include <iostream>
// #include <string>
// #include <iomanip> // Needed for decimal formatting
// #include <cstdlib> // Needed for the random number generatory
// #include <ctime>   // Needed for the time function
// using namespace std;

// int main() {
//     // Variables for the user's data
//     string employer;
//     double hoursWorked, hourlyRate, totalPay;
//     int receiptID;

//     // Set up the random seed based on the current time
//     srand(time(0));

//     // Get the hours worked and validate the input
//     cout << "Please enter the number of hours worked: ";
//     cin >> hoursWorked;
    
//     while (hoursWorked < 0) {
//         cout << "Error: Hours cannot be negative. Please try again: ";
//         cin >> hoursWorked;
//     }

//     // Get the hourly rate and validate the input (must be above 0)
//     cout << "Please enter the hourly pay rate: ";
//     cin >> hourlyRate;

//     while (hourlyRate <= 0) {
//         cout << "Error: Pay rate must be a positive number. Please try again: ";
//         cin >> hourlyRate;
//     }

//     // Clear the input buffer before reading the string
//     cin.ignore();
//     cout << "Enter the name of your company: ";
//     getline(cin, employer);

//     // Generate a random ID between 1000 and 2000
//     receiptID = rand() % 1001 + 1000;

//     // Logic for calculating pay with overtime (over 40 hours)
//     if (hoursWorked > 40) {
//         double regularPay = 40 * hourlyRate;
//         double overtimeHours = hoursWorked - 40;
//         double overtimePay = overtimeHours * (hourlyRate * 1.5);
//         totalPay = regularPay + overtimePay;
//     } else {
//         totalPay = hoursWorked * hourlyRate;
//     }

//     // Final Output Display
//     cout << fixed << setprecision(2); // Set to 2 decimal places for money
//     cout << "\n--- Payroll Summary ---" << endl;
//     cout << "Company Name: " << employer << endl;
//     cout << "Total Hours:  " << hoursWorked << endl;
//     cout << "Hourly Rate:  $" << hourlyRate << endl;
//     cout << "Document ID:  #" << receiptID << endl;
//     cout << "-----------------------" << endl;
//     cout << "The gross pay for " << employer << " is $" << totalPay << endl;
//     cout << "Calculation complete. Have a nice day!" << endl;

//     return 0;

// }





