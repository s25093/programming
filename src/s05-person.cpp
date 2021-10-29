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



auto Mr::who_is_it(Mr const& person) const -> std::string {
    std::string str = person.to_string();
    return str;
}

auto Ms::who_is_it(Ms const& person) const -> std::string {
    std::string str = person.to_string();
    return str;
}

auto King::who_is_it(King const& person) const -> std::string {
    std::string str = person.to_string();
    return str;
}

auto Queen::who_is_it(Queen const& person) const -> std::string {
    std::string str = person.to_string();
    return str;
}


int main()
{
    std::cout << person1.who_is_it(person1) << std::endl;
    std::cout << person2.who_is_it(person2) << std::endl;
    std::cout << person3.who_is_it(person3) << std::endl;
    std::cout << person4.who_is_it(person4) << std::endl;
}
