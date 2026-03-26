/*
 * Name: Ilgiz Satkynov
 * Date: February 26, 2026
 * Class: CIS D022A
 * Description: Program 6-16 - This program demonstrates the concept of 
 * local variables. It shows that variables defined inside a function 
 * are hidden from other functions, even if they have the same name.
 */

#include <iostream>
using namespace std;

// Function prototype
void anotherFunction();

int main()
{
    // num is a local variable in the main function
    int num = 5; 

    cout << "In main, num is " << num << endl;
    
    // Call anotherFunction, which has its own local num
    anotherFunction();
    
    // This will still show the original value of num in main
    cout << "Back in main, num is " << num << endl;

    return 0;
}

//**********************************************************
// Definition of anotherFunction                           *
// This function has its own local variable 'num'. Its     *
// initial value is displayed to show it is separate from  *
// the 'num' variable in the main function.                *
//**********************************************************
void anotherFunction()
{
    // num is local to anotherFunction
    int num = 20; 

    cout << "In anotherFunction, num is " << num << endl;
}