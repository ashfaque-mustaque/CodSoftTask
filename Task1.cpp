//Task 1 to make a Guessing Number Game system
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    int secretNumber = std::rand() % 100 + 1;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?" << std::endl;

    int userGuess;
    bool correctGuess = false;

    do {
        
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        
        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;
            correctGuess = true;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low. Try again!" << std::endl;
        } else {
            std::cout << "Too high. Try again!" << std::endl;
        }
    } while (!correctGuess);

    return 0;
}
