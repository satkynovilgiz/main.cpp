// Ilgiz Satkynov - Classwork
// Date: January 15, 2026
// Course: Beginning C++
//
// This file contains in-class examples from Chapter 2.
// The code is commented because it is for review only
// and not intended to be compiled.

// =======================================
// Program Structure & main()
// =======================================

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// =======================================
// Using string variables
// =======================================

// This program stores a movie title and prints it

// #include <iostream>
// #include <string>

// int main() {
//     string movieTitle;
//     movieTitle = "Inception";
//     cout << "My favorite movie is " << movieTitle << endl;
//     return 0;
// }

// =======================================
// Floating-Point Data Types (Program 2-16)
// =======================================

// Demonstrates float, double, and long double

// #include <iostream>
// #include <iomanip>

// int main() {
//     float floatVar = 3.1415926f;
//     double doubleVar = 3.141592653589;
//     long double longDoubleVar = 3.141592653589793238L;

//     cout << fixed;
//     cout << setprecision(7) << floatVar << endl;
//     cout << setprecision(15) << doubleVar << endl;
//     cout << setprecision(18) << longDoubleVar << endl;
//     return 0;
// }

// =======================================
// The bool Data Type
// =======================================

// Demonstrates boolean variables

// #include <iostream>

// int main() {
//     bool isRaining = true;
//     bool isSunny = false;

//     cout << isRaining << endl;
//     cout << isSunny << endl;

//     if (isRaining) {
//         cout << "Take an umbrella!" << endl;
//     }
//     return 0;
// }

// =======================================
// Variable Initialization
// =======================================

// Variables initialized when declared

// #include <iostream>

// int main() {
//     int length = 12;
//     int width = 5, height = 8, area;

//     area = length * width;

//     cout << area << endl;
//     return 0;
// }

// Another example of initialization

// int age = 17;
// double height = 5.9;
// bool isStudent = true;

// =======================================
// Division Operator (/)
// =======================================

// Integer division examples

// cout << 13 / 5;   // result is 2
// cout << 91 / 7;   // result is 13

// Floating-point division examples

// cout << 13 / 5.0; // result is 2.6
// cout << 91.0 / 7; // result is 13.0

// =======================================
// Named Constants (Program 2-28)
// =======================================

// Constants cannot be changed during execution

// #include <iostream>

// int main() {
//     const double PI = 3.14159;
//     const int MONTHS_IN_YEAR = 12;

//     double radius = 5.0;
//     double circumference;

//     circumference = 2 * PI * radius;

//     cout << circumference << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int x;
//    int y;

//    y = 4;
//    x = y + 5;
//    y = 13;
   
//    cout << x << " " << y;

//    return 0;
// }




#include <iostream>
using namespace std;

int main() {
   int x;
   int y;

   x = 6;
   y = 8;
   x += (1 + y);
   y = 7;

   cout << x << endl;
   cout << y << endl;
   
   return 0;
}