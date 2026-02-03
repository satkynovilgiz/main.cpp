/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 2
Description: Calculates stadium ticket income.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cout << "Class A tickets sold: ";
    cin >> a;
    cout << "Class B tickets sold: ";
    cin >> b;
    cout << "Class C tickets sold: ";
    cin >> c;

    double income = a*15 + b*12 + c*9;

    cout << fixed << setprecision(2);
    cout << "Total income: $" << income << endl;
    return 0;
}