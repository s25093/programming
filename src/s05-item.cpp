#include <iostream>
#include "Item.h"

bool used = false;

auto Item::use_on(Creature& cr) -> void {
cr.hp = cr.hp - 1;
}

auto Weapon::use_on(Creature& cr) -> void {
cr.hp = cr.hp - dmg;
}

auto Potion::use_on(Creature& cr) -> void {

if (used == false) {
cr.hp = cr.hp + hhp;
used = true;
} else {
cr.hp = cr.hp;
}
}

auto Sword::getStrength() -> int {
return strength;
}

auto Axe::getStrength() -> int {
return strength;
}

auto Bow::getStrength() -> int {
return strength;
}

auto Health_potion::getStrength() -> int {
return strength;
}

auto main() -> int {

Creature cr1("Werewolf", 50);
Sword sw1("Excalibur", 30, 10);
Health_potion pt1("Health", 10, 5);

std::cout << sw1.getName() << "'s strength is: " << sw1.getStrength() << std::endl;
std::cout << "You use " << sw1.getName() << " on a " << cr1.getName() << "." << std::endl;
sw1.use_on(cr1);
std::cout << cr1.getName() << "'s hp is now " << cr1.getHp() << "." << std::endl;
std::cout << "You use " << pt1.getName() << " on a " << cr1.getName() << "." << std::endl;
pt1.use_on(cr1);
std::cout << cr1.getName() << "'s hp is now " << cr1.getHp() << "." << std::endl;
std::cout << "You use " << pt1.getName() << " on a " << cr1.getName() << "." << std::endl;
pt1.use_on(cr1);
std::cout << cr1.getName() << "'s hp is now " << cr1.getHp() << "." << std::endl;

//sw1.use_on(cr1);
//pt1.use_on(cr1);
//pt1.use_on(cr1);

return 0;
}
