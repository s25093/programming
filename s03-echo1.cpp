#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>

auto main(int argc, char *argv[]) -> int {

auto array = std::vector<std::string>(argc);
array.shrink_to_fit();

int sizeOfArray = array.size();
int sizeOfArray2 = (unsigned)strlen(argv);

for (int i = 0; i < sizeOfArray2; i++) {
array.push_back(argv[i]);
}

if (strcmp(argv[1], "-n") == 0) {

for (int i = 2; i < sizeOfArray; i++) { 

std::cout << array[i] << " ";

}

} else if (strcmp(argv[1], "-r") == 0) {

for (int i = sizeOfArray - 1; i >= 2; i--) {

std::cout << array[i] << " ";

}

} else if (strcmp(argv[1], "-l") == 0) {

for (int i = 2; i < sizeOfArray; i++) { 

std::cout << array[i] << " " << std::endl;

}

} else {

for (int i = 0; i < sizeOfArray; i++) { 

std::cout << array[i] << " " << std::endl;

}

}

return 0;

}


