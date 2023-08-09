#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(&_weapon) {}
        ~HumanA() {};
        void    attack();
    private:
        std::string name;
        Weapon &weapon;
};

#endif