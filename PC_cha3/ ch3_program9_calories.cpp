/*
Name: Ilgiz Satkynov
Assignment: Chapter 3 - Program 9
Description: Calculates calories consumed.// 
Each cookie has 100 calories (300 calories per serving, 3 cookies per serving)
*/

#include <iostream>
using namespace std;

int main() {
    int cookies;
    cin >> cookies;

    cout << "Calories: " << cookies * 100 << endl;
    return 0;
}