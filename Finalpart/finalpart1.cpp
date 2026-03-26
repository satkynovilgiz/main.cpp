// Name: Ilgiz Satkynov
// Date: March 22, 2026
// Description: A modular food ordering system for De Anza Food Court. 
// Includes input validation and saves receipts to a random file [1000-2000].

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Data required by assignment [cite: 10]
double PRICE_ARRAY[5] = {5.25, 5.75, 5.95, 5.95, 5.95};
string BURGER_ARRAY[5] = {"De Anza Burger", "Bacon Cheese", "Mushroom Swiss", "Western Burger", "Don Cali Burger"};
int orderArray[5] = {0, 0, 0, 0, 0};

// Function Prototypes
void displayMenu();
void getInputs();
void calculate(double& subtotal, double& tax, double& total, bool isStaff);
void printBill(double subtotal, double tax, double total);
void saveBillToFile(double subtotal, double tax, double total);

int main() {
    srand(time(0)); 
    char userType;
    double subtotal = 0, tax = 0, total = 0;

    displayMenu();
    getInputs();

    // Check if anything was actually ordered before proceeding
    bool emptyOrder = true;
    for(int qty : orderArray) if(qty > 0) emptyOrder = false;

    if (emptyOrder) {
        cout << "\nNo items were ordered. Exiting program." << endl;
        return 0;
    }

    cout << "\nAre you a Student (S) or Staff (T)? ";
    cin >> userType;
    bool isStaff = (userType == 'T' || userType == 't');

    calculate(subtotal, tax, total, isStaff);
    printBill(subtotal, tax, total);
    saveBillToFile(subtotal, tax, total);

    return 0;
}

void displayMenu() {
    cout << "--- De Anza College Food Court Menu ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ". " << left << setw(20) << BURGER_ARRAY[i] 
             << "$" << PRICE_ARRAY[i] << endl;
    }
    cout << "0. Exit/Finish Ordering" << endl;
}

void getInputs() {
    int choice, qty;
    char continueOrder;
    while (true) {
        cout << "\nEnter item number (1-5) or 0 to finish: ";
        cin >> choice;

        // If user enters 0, exit the function immediately
        if (choice == 0) {
            break; 
        }
        
        // Validation for invalid numbers
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please try again." << endl;
            continue; 
        }

        cout << "How many " << BURGER_ARRAY[choice - 1] << "s? ";
        cin >> qty;
        orderArray[choice - 1] += qty;

        cout << "Add another item? (y/n): ";
        cin >> continueOrder;
        if (continueOrder == 'n' || continueOrder == 'N') {
            break;
        }
    }
}

void calculate(double& subtotal, double& tax, double& total, bool isStaff) {
    subtotal = 0;
    for (int i = 0; i < 5; i++) {
        subtotal += orderArray[i] * PRICE_ARRAY[i];
    }
    // Staff pay 9% tax, Students pay 0% [cite: 10]
    tax = isStaff ? (subtotal * 0.09) : 0.0;
    total = subtotal + tax;
}

void printBill(double subtotal, double tax, double total) {
    cout << fixed << setprecision(2);
    cout << "\n---------- FINAL RECEIPT ----------" << endl;
    for (int i = 0; i < 5; i++) {
        if (orderArray[i] > 0) {
            cout << orderArray[i] << " x " << BURGER_ARRAY[i] 
                 << " = $" << (orderArray[i] * PRICE_ARRAY[i]) << endl;
        }
    }
    cout << "-----------------------------------" << endl;
    cout << "Subtotal: $" << subtotal << "\nTax:      $" << tax << "\nTotal:    $" << total << endl;
}

void saveBillToFile(double subtotal, double tax, double total) {
    // Generate random filename between 1000 and 2000 [cite: 10]
    int randNum = rand() % 1001 + 1000;
    string fileName = to_string(randNum) + ".txt";
    ofstream outFile(fileName);

    if (outFile) {
        outFile << fixed << setprecision(2);
        outFile << "De Anza Food Court Receipt\n";
        for (int i = 0; i < 5; i++) {
            if (orderArray[i] > 0) {
                outFile << orderArray[i] << " x " << BURGER_ARRAY[i] << " = $" 
                        << (orderArray[i] * PRICE_ARRAY[i]) << endl;
            }
        }
        outFile << "Subtotal: $" << subtotal << "\nTax:      $" << tax << "\nTotal:    $" << total << endl;
        outFile.close();
        cout << "\nBill saved to " << fileName << endl;
    }
}
