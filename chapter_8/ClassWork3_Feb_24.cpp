/****************************************************
    Name: Ilgiz Satkynov
    CIS 22A Beginning Program Method C++ 
    Date: February 24, 2026
    ClassWork: Functions in Program 6-6
*****************************************************/

//This Program demonstrates a function with a parmeter.
#include <iostream> 
using namespace std;

// Function prototype
void displayValue(int);

int main() 
{
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);    // Call the function with an argument of 5 
    cout << "Now I am back in function main again.\n";
    return 0;
}
//********************************************************
// Definition of function displayValue.                  *
// It uses an integer parameter whos value is displayed. *
//********************************************************

void displayValue(int num)
{
    cout << "The value is: " << num << endl;
}