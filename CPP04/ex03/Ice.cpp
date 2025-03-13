#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice& Ice::operator=(const Ice& other) {

    (void)other;
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    Ice* clone = new Ice();
    std::cout << "Ice clone called" << std::endl;
    return clone;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}