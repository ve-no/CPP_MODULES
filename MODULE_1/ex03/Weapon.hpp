#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type) : type(type) {};
        ~Weapon() {};
        std::string getType();
        void    setType(std::string const & _type);
};

#endif