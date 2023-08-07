#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string _name);
        ~HumanB() {};
        void    attack();
    private:
        std::string name;
        Weapon weapon;
};

#endif