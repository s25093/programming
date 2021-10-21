struct Student {

    std::string name;
    std::string surname;
    int indexNumber;
    int semesterNumber;
    double gradeAverage;

    auto print_student_details() -> std::string;

    Student(std::string aName, std::string aSurname, int aIndexNumber, int aSemesterNumber, double aGradeAverage) {

        name = aName;
        surname = aSurname;
        indexNumber = aIndexNumber;
        semesterNumber = aSemesterNumber;
        gradeAverage = aGradeAverage;

    }

};
