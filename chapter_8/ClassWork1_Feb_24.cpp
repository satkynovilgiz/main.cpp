/****************************************************
    Name: Ilgiz Satkynov
    CIS 22A Beginning Program Method C++ 
    Date: February 24-25-26, 2026
    ClassWork: Functions in Program 6-1
*****************************************************/

//This Program has two functions: main and displayMessage
#include <iostream> 
using namespace std;

//*******************************************
// Definition of function displayMessage.   *
// This function displays a greeting.       *
//*******************************************

void displayMessage() 
{
    cout << "Hello from the function displayMessage.\n";
}

//*******************************************
// Function main                            *   
//*******************************************

int main() 
{
    cout << "Hello from main.\n";
    displayMessage(); // Call the function to display the message
    cout << "Back in function main again.\n";
    
    return 0;
}
//Finishing code

