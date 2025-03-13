#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure& Cure::operator=(const Cure& other) {
    (void)other;
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
    Cure* clone = new Cure();
    std::cout << "Cure clone called" << std::endl;
    // i have to delete their materias.
    return clone;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
