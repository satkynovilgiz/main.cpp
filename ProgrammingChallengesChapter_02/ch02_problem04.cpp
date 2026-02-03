/*
Name: Ilgiz Satkynov
Assignment: Chapter 2 Programming Challenges
Problem: #4 - Restaurant Bill
*/

#include <iostream>
using namespace std;

int main() {
    double mealCost = 88.67;
    double tax = mealCost * 0.0675;
    double tip = (mealCost + tax) * 0.20;
    double total = mealCost + tax + tip;

    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total Bill: $" << total << endl;

    return 0;
}