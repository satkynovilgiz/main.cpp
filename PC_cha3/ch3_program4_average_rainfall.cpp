/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 4
Description: Calculates average rainfall.
*/

#include <iostream>
using namespace std;

int main() {
    string m1, m2, m3;
    double r1, r2, r3;

    cin >> m1 >> r1;
    cin >> m2 >> r2;
    cin >> m3 >> r3;

    cout << "The average rainfall for "
         << m1 << ", " << m2 << ", and " << m3
         << " is " << (r1+r2+r3)/3 << " inches." << endl;
    return 0;
}