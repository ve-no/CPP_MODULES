#include "Zombie.hpp"

Zombie::Zombie () {
    std::cout << "new Zombie!" << std::endl;
}

Zombie::~Zombie (void) {
    std::cout << name << " deleted!" << std::endl;
}

void    Zombie::setName (std::string _name) {
    this->name = _name;
}

void    Zombie::announce (void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}