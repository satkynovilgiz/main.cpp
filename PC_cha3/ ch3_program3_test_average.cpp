/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 3
Description: Calculates average of five test scores.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double t1, t2, t3, t4, t5;

    cin >> t1 >> t2 >> t3 >> t4 >> t5;

    double avg = (t1+t2+t3+t4+t5)/5;

    cout << fixed << setprecision(1);
    cout << "Average: " << avg << endl;
    return 0;
}