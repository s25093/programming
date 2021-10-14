#include <iostream>

auto main() -> int {

int input;
std::cout << "Enter a number: " << std::endl;
std::cin >> input;

for (int i = input; i >= 0; i--) {

if (i == 1) {
std::cout << i << " bottle of beer on the wall, " << i << " bottle of beer." << std::endl;
std::cout << "Take it down, pass it around, " << i << " bottle of beer on the wall." << std::endl;

} else if (i > 0) {
std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << std::endl;
std::cout << "Take one down, pass it around, " << i << " bottles of beer on the wall." << std::endl;

} else {
std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << std::endl;
}


}

return 0;

}
