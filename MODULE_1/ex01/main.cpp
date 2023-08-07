#include "Zombie.hpp"

int main () {
    Zombie* zombieH;

    zombieH = zombieHorde(5, "issam");
    delete[] zombieH;
    return (0);
}