// Ilgiz Satkynov - Classwork 
// test.cpp


// This program stores a movie title and prints it to the console

// #include <iostream> // Include for input/output (cout)
// #include <string>   // Include for using std::string

// int main() {
//     // Declare a string variable to hold the movie title
//     std::string movieTitle;

//     // Assign a value to the movieTitle variable
//     movieTitle = "Inception";

//     // Print the movie title to the console
//     std::cout << "My favorite movie is " << movieTitle << std::endl;

//     // Return 0 to indicate the program ended successfully
//     return 0;
// }




// Floating-Point Data Types in Program 2-16

// #include <iostream>
// #include <iomanip> // for std::setprecision

// int main() {
//     // Declare floating-point variables
//     float floatVar = 3.1415926f;        
//     double doubleVar = 3.141592653589;  // double precision (about 15 digits)
//     long double longDoubleVar = 3.141592653589793238L; // extended precision

//     std::cout << std::fixed; 

//     std::cout << "float value:       " << std::setprecision(7) << floatVar << std::endl;
//     std::cout << "double value:      " << std::setprecision(15) << doubleVar << std::endl;
//     std::cout << "long double value: " << std::setprecision(18) << longDoubleVar << std::endl;

//     return 0;
// }




// The bool Data Type
// #include <iostream>

// int main() {
//     // Declare boolean variables
//     bool isRaining = true;  
//     bool isSunny = false;    

//     std::cout << "Is it raining? " << isRaining << std::endl;
//     std::cout << "Is it sunny?   " << isSunny << std::endl;

//     if (isRaining) {
//         std::cout << "Take an umbrella!" << std::endl;
//     }

//     if (!isSunny) { 
//         std::cout << "No need for sunglasses." << std::endl;
//     }

//     return 0;
// }




// Variable Initialization

// #include <iostream>
// int main() {
//     int length = 12;
//     int width = 5, height = 8, area;
//     int x = 10, y, z = 20;
//     area = length * width;
//     std::cout << "Length: " << length << std::endl;
//     std::cout << "Width: " << width << std::endl;
//     std::cout << "Height: " << height << std::endl;
//     std::cout << "Area: " << area << std::endl;

//     std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;

//     return 0;
// }


// Variable Initialization
// #include <iostream>
// #include <string>

// int main() {
//     int age = 17;  
//     double height = 5.9;
//     bool isStudent = true;
//     std::string name = "Ilgiz Satkynov";

//     std::cout << "Name: " << name << std::endl;
//     std::cout << "Age: " << age << std::endl;
//     std::cout << "Height: " << height << std::endl;
//     std::cout << "Is a student? " << (isStudent ? "Yes" : "No") << std::endl;

//     return 0;
// }

 





#include <iostream>
using namespace std;

int main() {
    cout << "Integer division examples:" << endl;
    cout << "13 / 5 = " << 13 / 5 << endl;   // displays 2
    cout << "91 / 7 = " << 91 / 7 << endl;   // displays 13

    cout << endl; 
    cout << "Floating-point division examples:" << endl;
    cout << "13 / 5.0 = " << 13 / 5.0 << endl; // displays 2.6
    cout << "91.0 / 7 = " << 91.0 / 7 << endl; // displays 13.0

    return 0;
}