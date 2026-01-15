//Hello this is Calculator
// sample calculator c++ program 
// this code written from Ilgiz Satkynov

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    cout << "Simple C++ Calculator\n";
     // start simple 
     // also this is "-", "+", "'=", "*" 

    do {
        cout << "\nEnter first number: ";
        cin >> num1;
// cout
        cout << "Enter operator (+ - * /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
                // Invalid operator
            default:
                cout << "Invalid operator!" << endl;
        }

        //Error message for calculator
        cout << "\nDo another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}

