/*
 * Name: Ilgiz Satkynov
 * Date: March 3, 2026
 * Class: CIS D022A
 * Description: Program 6-24 - This program demonstrates default function arguments.
 * It uses a function that displays stars in rows and columns.
 */

#include <iostream>
using namespace std;

// Function prototype with default arguments
// If no values are passed, cols defaults to 10 and rows defaults to 1.
void displayStars(int = 10, int = 1);

int main()
{
    // 1. Call with no arguments: uses 10 columns and 1 row
    displayStars();
    cout << endl;

    // 2. Call with one argument: uses 5 for columns and default (1) for rows
    displayStars(5);
    cout << endl;

    // 3. Call with two arguments: uses 7 for columns and 3 for rows
    displayStars(7, 3);
    
    return 0;
}

// Definition of function displayStars.                    *
// The default values are already listed in the prototype,  *
// so they are not repeated here in the function header.    *
void displayStars(int cols, int rows)
{
    // Nested loop to display the stars
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
            cout << "*";
        cout << endl;
    }
}