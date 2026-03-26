/*
 * Name: Ilgiz Satkynov
 * Date: March 3, 2026
 * Class: CIS D022A
 * Description: Program 6-25 - This program uses a reference variable 
 * as a function parameter. It doubles the value of the original variable.
 */

#include <iostream>
using namespace std;

// Function prototype - The & indicates the parameter is a reference
void doubleNum(int &);

int main()
{
    int value = 4;

    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    
    // Call the function - value is passed by reference
    doubleNum(value);
    
    // Because it was a reference, the original value is now changed!
    cout << "Now back in main, value is " << value << endl;

    return 0;
}

// Definition of function doubleNum.                       *
// The parameter refVar is a reference to the argument      *
// passed into it. Any changes to refVar affect the original.*
void doubleNum(int &refVar)
{
    refVar *= 2; 
}