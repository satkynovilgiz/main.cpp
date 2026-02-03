/*
Name: Ilgiz Satkynov
Assignment: Chapter 2 Programming Challenges
Problem: #2 - Sales Prediction
*/

#include <iostream>
using namespace std;

int main() {
    double totalSales = 8.6e6;
    double eastCoastPercent = 0.58;
    double eastCoastSales = totalSales * eastCoastPercent;

    cout << "East Coast sales: $" << eastCoastSales << endl;
    return 0;
}