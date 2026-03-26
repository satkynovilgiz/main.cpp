/*
 * Name: Ilgiz Satkynov
 * Date: March 5, 2026
 * Description: Program 7-1 - Accessing Array Elements.
 * This program asks for the number of hours worked by six employees 
 * and stores the values in an array.
 */

#include <iostream>
using namespace std;
int main()
{
    const int NUM_EMPLOYEES = 6; // Size declarator
    int hours[NUM_EMPLOYEES];    // Array definition

    // Get the hours worked by each employee.
    cout << "Enter the hours worked by " 
         << NUM_EMPLOYEES << " employees: ";

    // Accessing each element individually by its subscript (0-5)
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    // Display the values stored in the array
    cout << "The hours you entered are:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;

    return 0;
}