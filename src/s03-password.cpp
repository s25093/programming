#include <iostream>
#include <string>

auto main() -> int {

std::string input = "";
std::string password = "password123";

do {

std::cout << "Enter the password: " << std::endl;
std::getline(std::cin, input);

if (input == password) {
std::cout << "Ok!" << std::endl;
} else {
std::cout << "Wrong password. Please try again." << std:: endl;
} 
} while (input != password);

}



