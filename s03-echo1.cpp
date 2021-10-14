#include <iostream>
#include <string>
#include <string.h>
#include <vector>

auto main(int argc, char *argv[]) -> int {

auto array = std::vector<std::string>(argc);

if (argv[1] == std::string("-n")) {

for (int i = 2; i < argc; i++) { 

std::cout << array[i] << " ";

}

} else if (argv[1] == std::string("-r")) {

for (int i = argc - 1; i >= 2; i--) {

std::cout << array[i] << " ";

}

} else if (argv[1] == std::string("-l")) {

for (int i = 2; i < argc; i++) { 

std::cout << array[i] << std::endl;

}

} else {

for (int i = 1; i < argc; i++) { 

std::cout << array[i] << std::endl;

}

}

return 0;

}


