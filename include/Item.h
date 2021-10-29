class Creature {
public:
std::string name;
int hp;

Creature(std::string name, int hp) {

this-> name = name;
this-> hp = hp;
}

auto getName() -> std::string {
return name;
}

auto getHp() -> int {
return hp;
}

};

class Item {
public:
std::string name;

Item(std::string name) {
this-> name = name;
}

auto getName() -> std::string {
return name;
}

auto use_on(Creature& cr) -> void;

};

class Weapon : public Item {
public:
int dmg;

Weapon(std::string name, int dmg) : Item(name){
this-> dmg = dmg;
}

auto getDmg() -> int {
return dmg;
}

auto use_on(Creature& cr) -> void;

};

class Potion : public Item {
public:
int hhp;

Potion(std::string name, int hhp) : Item(name) {
this-> hhp = hhp;
}

auto getHhp() -> int {
return hhp;
}

auto use_on(Creature& cr) -> void;

};

class Sword : public Weapon {
public:
int strength;

Sword(std::string name, int dmg, int strength) : Weapon(name, dmg) {
this->strength = strength;
}

auto getStrength() -> int;

};

class Axe : public Weapon {
public:
int strength;

Axe(std::string name, int dmg, int strength) : Weapon(name, dmg) {
this->strength = strength;
}

auto getStrength() -> int;

};

class Bow : public Weapon {
public:
int strength;

Bow(std::string name, int dmg, int strength) : Weapon(name, dmg) {
this->strength = strength;
}

auto getStrength() -> int;

};

class Health_potion : public Potion {
public:
int strength;

Health_potion(std::string name, int hhp, int strength) : Potion(name, hhp) {
this->strength = strength;
}

auto getStrength() -> int;

};

