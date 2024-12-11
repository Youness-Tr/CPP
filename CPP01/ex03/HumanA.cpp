#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}