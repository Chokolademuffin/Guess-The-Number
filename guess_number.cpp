#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Sæt seed til at generere tilfældige tal
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generer et tilfældigt tal mellem 1 og 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int tries = 0;

    std::cout << "Welcome to the Guess A Number game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100, try to guess it!" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > secretNumber) {
            std::cout << "Wrong guess. Try a smaller number." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Wrong guess. Try a larger number." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed right " << tries << " attempt(s)." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}
