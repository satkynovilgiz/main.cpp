/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 8
Description: Calculates number of widgets.
*/

#include <iostream>
using namespace std;

int main() {
    double empty, loaded;
    cin >> empty >> loaded;

    cout << "Widgets: " << (loaded - empty) / 12.5 << endl;
    return 0;

}