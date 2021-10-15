#include <iostream>
#include <string>
#include "Student.h"

Student student1("John", "Doe", 25093, 1, 4.5);

int Student::print_student_details() {

std::cout << "Student name: " << name << std::endl;
std::cout << "Student surname: " << surname << std::endl;
std::cout << "Student index number: " << indexNumber << std::endl;
std::cout << "Student semester number: " << semesterNumber << std::endl;
std::cout << "Student grade average: " << gradeAverage << std::endl;

return 0;

}

auto main() -> int {

std::cout << student1.print_student_details() << std::endl;

return 0;

}
