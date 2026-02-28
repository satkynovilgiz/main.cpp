/****************************************************
    Name: Ilgiz Satkynov
    CIS 22A Beginning Program Method C++ 
    Date: February 24, 2026
    ClassWork: Functions in Program 6-12
*****************************************************/

// This Program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function prototype
int sum(int, int);

int main()
{
    int value1 = 20,    // The first value to add
        value2 = 40,    // The second value to add
        total;          // To hold the total

    // Call the sum function, passing value1 and value2
    total = sum(value1, value2);

    // Display the sum of the two values
    cout << "The sum of " << value1 << " and "
         << value2 << " is " << total << endl;

    return 0;
}

//*******************************************************
// Definition of function sum. This function returns
// the sum of its two integer parameters.
//*******************************************************

int sum(int num1, int num2)
{
    return num1 + num2;   // Return the sum
}