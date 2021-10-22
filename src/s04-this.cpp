#include <iostream>

struct Struct1 {

int a, b;

Struct1(int aa, int bb) {
a = aa;
b = bb;
}

auto printValue() const -> void {
std::cout << "The values of the object are: " << this -> a << " and " << this -> b << "." << std::endl;
}


};

auto main() -> int {

Struct1 struc(1, 2);

struc.printValue();

std::cout << "The address of the object is: " << &struc << "." << std::endl;

return 0;

}
