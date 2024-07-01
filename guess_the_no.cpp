#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numberToGuess;
    int guess;
    char playAgain;

    // Initialize random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    do {
        // Generate a random number between 1 and 1000
        numberToGuess = std::rand() % 1000 + 1;

        std::cout << "I have a number between 1 and 1000.\n";
        std::cout << "Can you guess my number?\n";
        std::cout << "Please type your first guess: ";

        do {
            std::cin >> guess;

            if (guess == numberToGuess) {
                std::cout << "Excellent! You guessed the number!\n";
            } else if (guess < numberToGuess) {
                std::cout << "Too low. Try again.\n";
            } else {
                std::cout << "Too high. Try again.\n";
            }

            std::cout << "Please type your next guess: ";
        } while (guess != numberToGuess);

        std::cout << "Would you like to play again? (yes or no): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}