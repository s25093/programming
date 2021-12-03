#include <iostream>
#include <string>
#include "Person.h"

Mr person1("Scott", "Lake");
Ms person2("Anna", "Lake");
King person3("Alfred", "Smith");
Queen person4("Elizabeth", "Stone");

auto Person::to_string() const -> std::string {
    std::string rNameSurname = name + " " + surname;
    return rNameSurname;
}
auto Mr::to_string() const -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto Ms::to_string() const -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto King::to_string() const -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

auto Queen::to_string() const -> std::string {
    std::string rTitleNameSurname = title + " " + name + " " + surname;
    return rTitleNameSurname;
}

template <typename Osoba>
auto who_is_it(Osoba const& pers) -> void {
std::cout << "This is " << pers.name << " " << pers.surname << "." << std::endl;
}


int main()
{
    who_is_it(person1);
    who_is_it(person2);
}
