// Ilgiz Satkynov - Classwork
// January 15, 2026
// Topic: Floating-Point Data Types
//
// Demonstrates float, double, and long double precision values.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float f = 3.1415926f;
    double d = 3.141592653589;
    long double ld = 3.141592653589793238L;

    cout << fixed;
    cout << setprecision(7) << "Float value: " << f << endl;
    cout << setprecision(15) << "Double value: " << d << endl;
    cout << setprecision(18) << "Long Double value: " << ld << endl;

    return 0;
}