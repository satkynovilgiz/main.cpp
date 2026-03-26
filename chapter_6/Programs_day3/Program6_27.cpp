/*
 * Name: Ilgiz Satkynov
 * Date: March 5, 2026
 * Class: CIS D022A
 * Description: Program 6-27 - Demonstrating Function Overloading.
 * The compiler chooses the correct 'square' function based on 
 * whether you pass it an int or a double.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// === FUNCTION PROTOTYPES ===
// Both have the same name, but different parameter types.
int square(int);
double square(double);

int main()
{
    int userInt;
    double userFloat;

    // Formatting for decimal output
    cout << fixed << showpoint << setprecision(2);

    // Get input from user
    cout << "Enter an integer and a floating-point value: ";
    cin >> userInt >> userFloat;

    // The compiler automatically calls the 'int' version here:
    cout << "The square of the integer is " << square(userInt) << endl;
    
    // The compiler automatically calls the 'double' version here:
    cout << "The square of the double is " << square(userFloat) << endl;

    return 0;
}

// Definition of overloaded function 'square' for ints.    *
int square(int number)
{
    return number * number;
}

// Definition of overloaded function 'square' for doubles. *
double square(double number)
{
    return number * number;
}