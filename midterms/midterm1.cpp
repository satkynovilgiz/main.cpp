//Ilgiz Satkynov
//Date: Feb 17, 2026
// Course: CIS 22A
// Midterm Part 1 - Coding Part
//Description: De Anza Food Court Kiosk - An interactive ordering system 
//that handles custom quantities, tax exemptions for students, and file-based billing.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. DATA & CONSTANTS
    const double P1 = 5.25; // De Anza Burger
    const double P2 = 5.75; // Bacon Cheese
    const double P3 = 5.95; // Mushroom Swiss
    const double P4 = 5.95; // Western Burger
    const double P5 = 5.95; // Don Cali Burger
    const double TAX_RATE = 0.09;

    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0;
    int choice = 0;

    //2.INTERACTIVE MENU LOOP
    cout << "==========================================" << endl;
    cout << "   WELCOME TO DE ANZA FOOD COURT KIOSK    " << endl;
    cout << "==========================================" << endl;

    while (choice != 6) {
        cout << "\n1. De Anza Burger   [$" << P1 << "]" << endl;
        cout << "2. Bacon Cheese     [$" << P2 << "]" << endl;
        cout << "3. Mushroom Swiss   [$" << P3 << "]" << endl;
        cout << "4. Western Burger   [$" << P4 << "]" << endl;
        cout << "5. Don Cali Burger  [$" << P5 << "]" << endl;
        cout << "6. >>> CHECKOUT & PRINT RECEIPT <<<" << endl;
        cout << "\nPlease select an option (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            int amount;
            cout << "Quantity: ";
            cin >> amount;
            
            if (amount < 0) {
                cout << "!! Error: Quantity cannot be negative !!" << endl;
            } else {
                if (choice == 1) q1 += amount;
                else if (choice == 2) q2 += amount;
                else if (choice == 3) q3 += amount;
                else if (choice == 4) q4 += amount;
                else if (choice == 5) q5 += amount;
                cout << ">> Added to cart." << endl;
            }
        } else if (choice != 6) {
            cout << "!! Invalid Selection. Please use 1-6 !!" << endl;
        }
    }

    //3. CUSTOMER TYPE
    char type;
    cout << "\nAre you a Student (s) or Staff (t)? ";
    cin >> type;

    double subtotal = (q1*P1) + (q2*P2) + (q3*P3) + (q4*P4) + (q5*P5);
    double tax = (type == 't' || type == 'T') ? (subtotal * TAX_RATE) : 0.0;
    double total = subtotal + tax;

    //4. RECEIPT GENERATION (Console & File)
    ofstream outFile("output.txt");
    
    // Logic to print to both locations
    ostream* outputs[] = { &cout, &outFile };

    for (int i = 0; i < 2; i++) {
        *outputs[i] << fixed << setprecision(2);
        *outputs[i] << "\n--------- DE ANZA RECEIPT ---------" << endl;
        if (q1 > 0) *outputs[i] << "De Anza Burger   x" << q1 << "  $" << q1*P1 << endl; 
        if (q2 > 0) *outputs[i] << "Bacon Cheese     x" << q2 << "  $" << q2*P2 << endl;
        if (q3 > 0) *outputs[i] << "Mushroom Swiss   x" << q3 << "  $" << q3*P3 << endl;
        if (q4 > 0) *outputs[i] << "Western Burger   x" << q4 << "  $" << q4*P4 << endl;
        if (q5 > 0) *outputs[i] << "Don Cali Burger  x" << q5 << "  $" << q5*P5 << endl;
        *outputs[i] << "-----------------------------------" << endl;
        *outputs[i] << "Subtotal:        $" << subtotal << endl;
        *outputs[i] << "Tax:             $" << tax << endl;
        *outputs[i] << "TOTAL:           $" << total << endl;
        *outputs[i] << "-----------------------------------" << endl;
    }

    outFile.close();
    cout << "\nDONE! Your receipt is saved in output.txt" << endl;

    return 0;
}