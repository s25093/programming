#include <iostream>
#include <string>
#include <vector>
#include <sstream>

auto main() -> int {

    std::cout << "Enter some text: " << std::endl;

    std::vector<char> vecArray;
    char input;
    std::string line;

    std::getline(std::cin, line);
    std::istringstream stream(line);

    while (stream >> input) {
            vecArray.push_back(input);
    }

    int sizeOfArray = vecArray.size();

    if ((vecArray[0] == '-') & (vecArray[1] == 'n')) {

        for (int i = 2; i < sizeOfArray; i++) {

            std::cout << vecArray[i] << " ";

        }

    } else if ((vecArray[0] == '-') & (vecArray[1] == 'r')) {

        if ((vecArray[2] == '-') & (vecArray[3] == 'l')) {
            for (int i = sizeOfArray - 1; i >= 4; i--) {
                std::cout << vecArray[i] << " " << std::endl;
            }
        } else if ((vecArray[2] == '-') & (vecArray[3] == 'n')) {
            for (int i = sizeOfArray - 1; i >= 4; i--) {

                std::cout << vecArray[i] << " ";
            }
        } else {
            for (int i = sizeOfArray - 1; i >= 2; i--) {

                std::cout << vecArray[i] << " ";
            }
        }

    } else if ((vecArray[0] == '-') & (vecArray[1] == 'l')) {

        for (int i = 2; i < sizeOfArray; i++) {

            std::cout << vecArray[i] << std::endl;

        }

    } else {

        for (int i = 0; i < sizeOfArray; i++) {

            std::cout << vecArray[i] << " ";

        }

    }

}

