#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int guessCount = 0;

    cout << "Guess the number between 1 and 100!\n";

    // Loop until the correct guess
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        guessCount++;

        if (guess > randomNumber)
            cout << "Too high! Try again.\n";
        else if (guess < randomNumber)
            cout << "Too low! Try again.\n";
    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the number in " << guessCount << " tries.\n";
    return 0;
}
