#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("AMateria") {
    std::cout << "The AMateria Default Constructor called >" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "The AMateria Parameterized Constructor called >" << std::endl;
}

AMateria::AMateria(AMateria const & other) {
    std::cout << "The AMateria Copy Constructor called >" << std::endl;
    *this = other;
}

AMateria::~AMateria() {
    std::cout << "The AMateria Destructor called >" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & other) { //? useless
    std::cout << "The AMateria Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter & target) {
    std::cout << "The AMateria use function called with " + target.getName() << std::endl;
    (void)target;      
}