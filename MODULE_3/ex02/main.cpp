#include "FragTrap.hpp"

int main()
{
    FragTrap fragtrap("D7");
    FragTrap fragtrap2(fragtrap);
    FragTrap fragtrap3("D8");

    fragtrap3 = fragtrap2;

    fragtrap.attack("Enemy");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();
    return 0;
}
