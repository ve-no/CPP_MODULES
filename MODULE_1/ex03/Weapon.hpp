#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {
    public:
        Weapon() {};
        ~Weapon() {};
        std::string getType();
        void    setType(std::string _type);
    private:
        std::string type;
};

#endif