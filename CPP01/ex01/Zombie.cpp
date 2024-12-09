#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
    std::cout << this->name << " is dead" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name) {
    this->name = name;
}