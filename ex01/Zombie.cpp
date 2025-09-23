#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {
    std::cout << "Zombie created (default)." << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Zombie " << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraaiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}