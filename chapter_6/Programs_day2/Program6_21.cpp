/*
 * Name: Ilgiz Satkynov
 * Date: March 3, 2026
 * Class: CIS D022A
 * Description: Program 6-21 - This program shows that local variables 
 * do not retain their values between function calls.
 */

#include <iostream>
using namespace std;

// Function prototype
void showLocal();

int main()
{
    // Call the function three times
    showLocal();
    showLocal();
    showLocal();

    return 0;
}

// Definition of function showLocal.                        
// The local variable localNum is recreated and initialized 
// each time the function is called.                        
void showLocal()
{
    int localNum = 5; // Local variable initialized to 5

    cout << "localNum is " << localNum << endl;
    
    // Change the value, but this change is lost when function ends
    localNum = 99; 
}