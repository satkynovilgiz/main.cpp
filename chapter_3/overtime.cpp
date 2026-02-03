// // Name: Ilgiz Satkynov
// // Date: Jan 27, 2026
// // Description:
// // This program calculates gross pay including overtime
// // and prints a formatted payroll report.

// #include <iostream>
// #include <iomanip>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     string company;
//     double hours, rate;
//     double grossPay;
//     int documentNumber;

//     // Seed random generator
//     srand(time(0));

//     // Input
//     cout << "Enter the hours: ";
//     cin >> hours;

//     cout << "Enter the rate: ";
//     cin >> rate;

//     cin.ignore(); // clear buffer
//     cout << "Enter your company name: ";
//     getline(cin, company);

//     // Overtime calculation
//     if (hours > 40)
//     {
//         grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);
//     }
//     else
//     {
//         grossPay = hours * rate;
//     }

//     // Random document number 1000–2000
//     documentNumber = rand() % 1001 + 1000;

//     // Output
//     cout << fixed << setprecision(2);
//     cout << "\nCompany: " << company << endl;
//     cout << "Hours: " << hours << endl;
//     cout << "Rate: " << rate << endl;
//     cout << "Your document number is: " << documentNumber << endl;
//     cout << "Your " << company << " gross pay is "
//          << grossPay << " dollars.\n";

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
   int numPuppies;

   numPuppies = 6;
   
   if (numPuppies == 4) {
      cout << "b" << endl;
   }
   else {
      cout << "e" << endl;
   }
   
   cout << "g" << endl;

   return 0;
}

