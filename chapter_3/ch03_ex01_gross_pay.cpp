// Name: Ilgiz Satkynov
// Description: This program calculates an employee's gross pay based on
// the number of hours worked and the hourly pay rate entered by the user.

#include <iostream>
using namespace std;

int main() {
    double hours;
    double rate;
    double grossPay;

    cout << "Enter the hours: ";
    cin >> hours;

    cout << "Enter the rate: ";
    cin >> rate;

    grossPay = hours * rate;

    cout << "Hours: " << hours << endl;
    cout << "Rate: " << rate << endl;
    cout << "Your gross pay is " << grossPay << " dollars." << endl;

    return 0;
}

/*
Hours: 95
Rate: 105.5
Your gross pay is 10022.5 dollars.
--
Hours: 25
Rate: 85.23
Your gross pay is 2130.75 dollars.
*/