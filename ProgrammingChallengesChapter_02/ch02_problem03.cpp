/*
Name: Ilgiz Satkynov
Assignment: Chapter 2 Programming Challenges
Problem: #3 - Sales Tax
*/

#include <iostream>
using namespace std;

int main() {
    double purchase = 95.0;
    double stateTax = 0.04;
    double countyTax = 0.02;
    double totalTax = purchase * (stateTax + countyTax);

    cout << "Total sales tax: $" << totalTax << endl;
    return 0;
}