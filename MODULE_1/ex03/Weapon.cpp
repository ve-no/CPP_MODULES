#include "Weapon.hpp"

std::string Weapon::getType() {
    return this->type;
}

void    Weapon::setType(std::string _type) {
    this->type = _type;
}
