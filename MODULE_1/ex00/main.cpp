#include "Zombie.hpp"

int main () {
    Zombie* heapZombie;

    heapZombie = newZombie("foo");
    heapZombie->announce();
    randomChump("Chump");
    delete heapZombie;
    return (0);
}