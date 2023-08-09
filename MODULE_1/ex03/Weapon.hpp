#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {
    public:
        ~Weapon() {};
        Weapon(){};
        Weapon(std::string type) : type(type) {};
        std::string getType();
        void    setType(std::string _type);
    private:
        std::string type;
};

#endif