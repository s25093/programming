struct Student {

std::string name;
std::string surname;
int indexNumber;
int semesterNumber;
double gradeAverage;

int print_student_details();

Student(std::string aName, std::string aSurname, int aIndexNumber, int aSemesterNumber, double aGradeAverage) {

name = aName;
surname = aSurname;
indexNumber = aIndexNumber;
semesterNumber = aSemesterNumber;
gradeAverage = aGradeAverage;

}

std::string getName() {

return name;

}

std::string getSurname() {

return surname;

}

int getIndexNumber() {

return indexNumber;

}

int getSemesterNumber() {

return semesterNumber;

}

double getGradeAverage() {

return gradeAverage;

}

};
