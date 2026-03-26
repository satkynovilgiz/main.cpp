/*
 * Name: Ilgiz Satkynov
 * Date: March 5, 2026
 * Description: Program 7-10 - Demonstrating the range-based for loop.
 * This loop automatically iterates once for each element in the array.
 */

#include <iostream>
using namespace std;

int main()
{
    // Define an array of integers.
    // The size is implicitly set to 5 based on the initialization list.
    int numbers[] = { 10, 20, 30, 40, 50,60,70,80,90,100 };

    // Display the values in the array using a range-based for loop.
    // 'val' is the range variable that receives a copy of each element.
    for (int val : numbers)
    {
        cout << val << endl;
    }

    return 0;
}