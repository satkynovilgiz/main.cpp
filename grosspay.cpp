#include <iostream>
using namespace std;

int main() {
    // Ilgiz Satkynov
    // Chapter 2 Exercise 1
    // This program calculates gross pay
    
    string companyName = "De Anza College";
    int hoursWorked = 40;
    int ratePerHour = 100;
    
    // Calculate the gross pay
    int grossPay = hoursWorked * ratePerHour;
    
    // Display the results
    cout << "Company Name: " << companyName << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Rate per Hour: " << ratePerHour << endl;
    cout << "Your " << companyName << " gross pay is: " 
         << grossPay << " dollars" << endl;
    
    return 0;
}


