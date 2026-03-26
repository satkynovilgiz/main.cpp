/*
 * Name: Ilgiz Satkynov
 * Date: March 3, 2026
 * Class: CIS D022A
 * Description: Corrected Question 22 - x is passed by VALUE (no &)
 * and y is passed by REFERENCE (uses &).
 */

#include <iostream>
using namespace std;

// Prototype: Only the second one has the &
void calc(int&, int&);

int main()
{
    int x = 1; 
    int y = 2; 
    int z = 3; 

    // Calling the function
    calc(x, y); 

    // This will print: 1 6 3
    cout << x << " " << y << " " << z << endl;

    return 0;
}

// Definition of function calc
// a is a copy (Pass by Value)
// b is the original (Pass by Reference)
void calc(int &a, int &b) 
{ 
    int c; 
    c = a + 2;   // c = 1 + 2 = 3
    a = a * 3;   // a = 1 * 3 = 3 (Original x stays 1)
    b = c + a;   // b = 3 + 3 = 6 (Original y becomes 6)
}