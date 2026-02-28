/****************************************************
    Name: Ilgiz Satkynov
    CIS 22A Beginning Program Method C++ 
    Date: February 24, 2026
    ClassWork: Functions in Program 6-8
*****************************************************/

//This Program demonstrates a function with a parmeter.
#include <iostream> 
using namespace std;

// Function prototype
void showSum(int, int, int);

int main() 
{
    int value1, value2, value3;
    
    // Get three integers from the user.
    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin >> value1 >> value2 >> value3;      // Read three integers from the user.
    
    showSum(value1, value2, value3);        // Call the function to display the sum of the three numbers.
    
    return 0;
}
//************************************************************
// Definition of function showSum.                           *
// It uses three integer parameters. Their sum is displayed. *
//************************************************************

void showSum(int num1, int num2, int num3)
{
    cout << (num1 + num2 + num3) << endl;  // Calculate the sum of the three numbers.
    
}