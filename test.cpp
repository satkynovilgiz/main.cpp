#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));            
    int secret = rand() % 100 + 1; 
    int guess;
    int tries = 0;

    cout << "🎮 Welcome to Guess the Number Game!\n";
    cout << "I picked a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secret) {
            cout << "Too high!\n";
        } else if (guess < secret) {
            cout << "Too low!\n";
        } else {
            cout << "🎉 Correct! You won in " << tries << " tries.\n";
        }

    } while (guess != secret);

    return 0;
}
