/*
Name: Ilgiz Satkynov
Assignment: Chapter 2 Programming Challenges
Problem: #6 - Annual Pay
*/

#include <iostream>
using namespace std;

int main() {
    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    cout << "Annual Pay: $" << annualPay << endl;
    return 0;
}