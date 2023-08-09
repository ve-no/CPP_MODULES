#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name) : name(name) {
            weapon = nullptr;
        };
        ~HumanB() {};
        void    attack();
        void setWeapon(Weapon &newWeapon);
    private:
        std::string name;
        Weapon *weapon;
};

#endif