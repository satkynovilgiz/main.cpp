#include <iostream>
using namespace std;

// Function prototype using a REFERENCE parameter
void doSomething(int&);

int main()
{
    int x = 2;
    cout << x << endl;        // First output
    doSomething(x);           // Call function
    cout << x << endl;        // Third output
    return 0;
}

void doSomething(int& num)
{
    num = 0;                  // Changes the original variable
    cout << num << endl;      // Second output
}