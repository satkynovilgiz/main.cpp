/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 7
Description: Calculates box office profit.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movie;
    int adults, kids;

    getline(cin, movie);
    cin >> adults >> kids;

    double gross = adults*10 + kids*6;
    double net = gross * 0.2;

    cout << fixed << setprecision(2);
    cout << "Movie Name: " << movie << endl;
    cout << "Gross Profit: $" << gross << endl;
    cout << "Net Profit: $" << net << endl;
    cout << "Distributor: $" << gross-net << endl;
    return 0;
}

