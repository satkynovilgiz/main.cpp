/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 5
Description: Calculates male and female percentages.
*/

#include <iostream>
using namespace std;

int main() {
    double males, females;
    cin >> males >> females;

    double total = males + females;
    cout << "Males: " << (males/total)*100 << "%\n";
    cout << "Females: " << (females/total)*100 << "%\n";
    return 0;
}