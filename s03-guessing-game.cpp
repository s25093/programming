#include <iostream>
#include <stdlib.h>

auto main() -> int {

int randomNumber, guessNumber;
randomNumber = std::rand() % 100 + 1;

do {

std::cout << "Enter your guess: " << std::endl;
std::cin >> guessNumber;

if (guessNumber == randomNumber) {
std::cout << "Congratulations! You guessed right." << std::endl;
} else if (guessNumber < randomNumber) {
std::cout << "Your number is too small." << std::endl;
} else {
std::cout << "Your number is too big." << std::endl;
}

} while (guessNumber != randomNumber); 

return 0;

}
