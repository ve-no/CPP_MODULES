#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

        Zombie* zombieHorde = NULL;

    if (N <= 0)
        std::cout << "no zombie to display" << std::endl;
    else {
        zombieHorde = new Zombie[N];
        for (int i = 0; i < N; i++) {
            zombieHorde[i].setName(name);
            zombieHorde[i].announce();
        }
    }
    return (zombieHorde);
}
