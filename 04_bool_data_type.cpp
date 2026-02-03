// Ilgiz Satkynov - Classwork
// January 15, 2026
// Topic: Boolean Data Type
//
// Demonstrates boolean variables and simple if conditions.

#include <iostream>
using namespace std;

int main() {
    bool isStudent = true;
    bool hasHomework = false;

    cout << "Is student? " << isStudent << endl;
    cout << "Has homework? " << hasHomework << endl;

    if (isStudent) {
        cout << "Student is enrolled." << endl;
    }

    return 0;
}