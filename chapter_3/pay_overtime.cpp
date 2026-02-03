/******************************************************
Name: Ilgiz Satkynov
Date: January 2026
Program:
This program asks for employee work data,
calculates gross pay with overtime, generates
a random document ID, and prints a pay report.
******************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string companyName;
    double workedHours;
    double hourlyPay;
    double totalPay;
    int docID;

    // Start random generator
    srand(time(0));

    // Get user input
    cout << "Enter the number of hours worked: ";
    cin >> workedHours;

    cout << "Enter the hourly rate: ";
    cin >> hourlyPay;

    cin.ignore();
    cout << "Enter your company name: ";
    getline(cin, companyName);

    // Calculate pay with overtime
    if (workedHours > 40)
    {
        double overtimeHours = workedHours - 40;
        totalPay = (40 * hourlyPay) + (overtimeHours * hourlyPay * 1.5);
    }
    else
    {
        totalPay = workedHours * hourlyPay;
    }

    // Generate random document ID
    docID = rand() % 1001 + 1000;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nCompany: " << companyName << endl;
    cout << "Hours Worked: " << workedHours << endl;
    cout << "Hourly Rate: $" << hourlyPay << endl;
    cout << "Document ID: " << docID << endl;
    cout << "Employee gross pay: $" << totalPay << endl;
    cout << "Thank you for working with " << companyName
         << "! Your payment is $" << totalPay << ".\n";

    return 0;
}

/*
Sample Run 1:
Enter the number of hours worked: 50
Enter the hourly rate: 12
Enter your company name: Tesla

Company: Tesla
Hours Worked: 50
Hourly Rate: $12.00
Document ID: 1734
Employee gross pay: $660.00
Thank you for working with Tesla! Your payment is $660.00.

Sample Run 2:
Enter the number of hours worked: 35
Enter the hourly rate: 18
Enter your company name: Apple

Company: Apple
Hours Worked: 35
Hourly Rate: $18.00
Document ID: 1402
Employee gross pay: $630.00
Thank you for working with Apple! Your payment is $630.00.
*/
