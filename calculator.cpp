#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    cout << "🧮 Simple C++ Calculator\n";

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

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
                    cout << "❌ Error: Division by zero!" << endl;
                break;
            default:
                cout << "❌ Invalid operator!" << endl;
        }

        cout << "\nDo another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye! 👋\n";
    return 0;
}
