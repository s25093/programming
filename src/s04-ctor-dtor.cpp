#include <iostream>
#include <string>

struct Struct1 {

std::string str;

Struct1(std::string str1) {
str = str1;
}

~Struct1() {
std::cout << "DESTRUCTION!" << std::endl;
std::cout << str << std::endl;

}
};

auto main() -> int {

std::string input;
std::cout << "Enter a string: " << std::endl;
std::getline(std::cin, input);

Struct1 struc(input);

return 0;

}

