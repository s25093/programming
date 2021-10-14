#include <iostream>

auto main() -> int {

int inputNumber;
int count = 0;
std::cout << "Enter a number: " << std::endl;
std::cin >> inputNumber;

for (int i = 1; i <= inputNumber; i++){

std::cout << i << std::endl;

if ((i % 3 == 0) & (i % 5 == 0)){
std::cout << "FizzBuzz" << std::endl;
count++;
} else if (i % 3 == 0) {
std::cout << "Fizz" << std::endl;
} else if (i % 5 == 0) {
std::cout << "Buzz" << std::endl;
} else {
std::cout << "No Fizz nor Buzz :(" << std::endl;
}

}

std::cout << inputNumber << " has " << count << " FizzBuzz'es." << std::endl;



return 0;

}

