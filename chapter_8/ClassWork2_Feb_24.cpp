/****************************************************
    Name: Ilgiz Satkynov
    CIS 22A Beginning Program Method C++ 
    Date: February 24, 2026
    ClassWork: Functions in Program 6-5
*****************************************************/

//This Program has three functions: main and First and Second.
#include <iostream> 
using namespace std;

// Function prototypes
void first();
void second();  

int main() 
{
    cout << "I am starting in function main.\n";
    first();        // Call the first function
    second();       // Call the second function
    cout << "Back in function main again.\n";
    
    return 0;
}

//********************************************
// Definition of function first.             *
// This function displays a message.         * 
//********************************************  

void first()
{
    cout << "I am now inside function first.\n";
}   

//********************************************
// Definition of function second.            *
// This function displays a message.         * 
//********************************************  

void second()
{
    cout << "I am now inside function second.\n";
}   
    