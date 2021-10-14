#include <iostream>
#include <string>
#include <string.h>

auto main() -> int {

char array[1000];
std::cout << "Enter some text: " << std::endl;
std::cin.get(array, 1000);

int sizeOfArray = sizeof(array)/array[0];

if ((array[0] == '-') & (array[1] == 'n')) {

for (int i = 2; i < sizeOfArray; i++) { 

std::cout << array[i] << " ";

}

} else if ((array[0] == '-') & (array[1] == 'r')) {

for (int i = sizeOfArray - 1; i >= 2; i--) {

std::cout << array[i] << " ";

}

} else if ((array[0] = '-') & (array[1] == 'l')) {

for (int i = 2; i < sizeOfArray; i++) { 

std::cout << array[i] << std::endl;

}

} else {

for (int i = 1; i < sizeOfArray; i++) { 

std::cout << array[i] << std::endl;

}

}

}


