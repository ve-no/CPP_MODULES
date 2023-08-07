#include "HumanA.hpp"

HumanA::HumanA(std::string _name) {
    this->name = _name;
}

void    HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}