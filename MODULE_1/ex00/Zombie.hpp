#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
class Zombie {
    private:
        std::string name;
    public:
        Zombie (std::string _name) {
            name = _name;
        }

        ~Zombie (void) {
            std::cout << name << " deleted" << std::endl;
        }

        void    announce (void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif