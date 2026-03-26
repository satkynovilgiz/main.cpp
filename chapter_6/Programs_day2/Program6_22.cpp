/*
 * Name: Ilgiz Satkynov
 * Date: March 3, 2026
 * Class: CIS D022A
 * Description: Program 6-22 - This program uses a static local variable.
 * Unlike regular local variables, a static variable stays in memory 
 * and keeps its value even after the function ends.
 */

#include <iostream>
using namespace std;

// Function prototype
void showStatic();

int main()
{
    // Call the function five times to see the value increase
    for (int count = 0; count < 5; count++)
        showStatic();

    return 0;
}

// Definition of function showStatic.                       
// statNum is a static local variable. It is initialized to 
// 0 only once. Its value is incremented and remembered     
// each time the function is called.                        
void showStatic()
{
    static int statNum; // Automatically initialized to 0

    cout << "statNum is " << statNum << endl;
    statNum++;
}