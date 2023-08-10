#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    weapon = nullptr;
};

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &newWeapon) {
    weapon = &newWeapon;
}

void HumanB::attack() {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " is unarmed and cannot attack." << std::endl;
    }
}
