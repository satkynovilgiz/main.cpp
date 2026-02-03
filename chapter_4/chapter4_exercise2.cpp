/*
Name: Ilgiz Satkynov
exercise: Chapter 4 Exercise 2
Date: February 03, 2026
Description:
This program asks the user for company name, hours worked, and hourly rate.
It calculates the gross pay including overtime and prints the result.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string company;
    double hours;
    double rate;
    double pay;
    int docNum;

    // start random number generator
    srand(time(0));

    // get input from user
    cout << "Enter company name: ";
    getline(cin, company);

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter hourly rate: ";
    cin >> rate;

    // calculate pay
    if (hours > 40)
    {
        pay = (40 * rate) + ((hours - 40) * rate * 1.5);
    }
    else
    {
        pay = hours * rate;
    }

    // random document number
    docNum = rand() % 1001 + 1000;

    // display output
    cout << fixed << setprecision(2);
    cout << "\nCompany: " << company << endl;
    cout << "Hours: " << hours << endl;
    cout << "Rate: " << rate << endl;
    cout << "Document number: " << docNum << endl;
    cout << "Your " << company << " gross pay is $" << pay << endl;

    return 0;
}
