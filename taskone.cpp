// number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int correctNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess a number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess < correctNumber) {
            cout << "Too low! Try again: ";
        }
        else if (guess > correctNumber) {
            cout << "Too high! Try again: ";
        }
        else {
            cout << "You guessed it right!..Congratulations" << endl;
            break;
        }
    }

    return 0;
}