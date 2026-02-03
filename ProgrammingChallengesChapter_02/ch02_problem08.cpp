/*
Name: Ilgiz Satkynov
Assignment: Chapter 2 Programming Challenges
Problem: #8 - Total Purchase
*/

#include <iostream>
using namespace std;

int main() {
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double tax = subtotal * 0.07;
    double total = subtotal + tax;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}