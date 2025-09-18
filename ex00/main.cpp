#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("HeapZed");
    heapZombie->announce();

    randomChump("StackZed");

    delete heapZombie;
    return (0);
}