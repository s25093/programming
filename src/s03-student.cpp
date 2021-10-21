#include <iostream>
#include <string>
#include "Student.h"

Student student1("John", "Doe", 25093, 1, 4.545);

auto Student::print_student_details() -> std::string {

    std::string studentDetails;
    studentDetails = "Student name: " + name + "\n" +
            "Student surname: " + surname + "\n" +
            "Student index number: " + std::to_string(indexNumber) + "\n" +
            "Student semester number: " + std::to_string(semesterNumber) + "\n" +
            "Student grade average: " + std::to_string(gradeAverage);

    return studentDetails;

}

auto main() -> int {

    std::cout << student1.print_student_details() << std::endl;

    return 0;

}
