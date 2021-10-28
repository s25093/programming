#include <iostream>
#include <string>
#include "Person.h"

Mr person1("Mr", "Scott", "Lake");
Ms person2("Ms", "Anna", "Lake");
King person3("King", "Alfred", "Smith");
Queen person4("Queen", "Elizabeth", "Stone");

auto Person::to_string() -> std::string {
    std::string rNameSurname = name + " " + surname;
    return rNameSurname;
}
auto Mr::to_string1() -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto Ms::to_string2() -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto King::to_string3() -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto Queen::to_string4() -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}



auto who_is_it(Mr &const person) -> std::string {
    std::string str = person.to_string1();
    return str;
}

auto who_is_it2(Ms &const person) -> std::string {
    std::string str = person.to_string2();
    return str;
}

auto who_is_it3(King& const person) -> std::string {
    std::string str = person.to_string3();
    return str;
}

auto who_is_it4(Queen& const person) -> std::string {
    std::string str = person.to_string4();
    return str;
}

int main()
{
    std::cout << who_is_it(person1) << std::endl;
    std::cout << who_is_it2(person2) << std::endl;
    std::cout << who_is_it3(person3) << std::endl;
    std::cout << who_is_it4(person4) << std::endl;
}

