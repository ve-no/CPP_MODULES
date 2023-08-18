#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap("D7");
    ScavTrap scavtrap2(scavtrap);
    ScavTrap scavtrap3("D8");

    scavtrap3 = scavtrap2;

    scavtrap.attack("Enemy");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    return 0;
}
