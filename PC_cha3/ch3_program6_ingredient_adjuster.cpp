/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 6
Description: Adjusts cookie ingredients.
*/

#include <iostream>
using namespace std;

int main() {
    int cookies;
    cin >> cookies;

    double factor = cookies / 48.0;

    cout << "Sugar: " << 1.5 * factor << " cups\n";
    cout << "Butter: " << 1.0 * factor << " cups\n";
    cout << "Flour: " << 2.75 * factor << " cups\n";
    return 0;
}