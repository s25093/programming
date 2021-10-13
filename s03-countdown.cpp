#include <iostream>
#include <string>

auto main() -> int {

int number;
std::cout << "Please enter a number: " << std::endl;
std::cin >> number;

if (number > 0) {

for (int i = number; i >= 0; i--){
std::cout << i << std::endl;
}

} else if (number == 0){

std::cout << 0 << std::endl;

} else {

for (int i = number; i <= 0; i++){
std::cout << i <<std::endl;
}

}

return 0;

}
