#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "The WrongCat Default Constructor called >" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "The WrongCat Parameterized Constructor called >" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "The WrongCat Copy Constructor called >" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "The WrongCat Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    WrongCat::makeSound() const {
    std::cout << "The WrongCat makes a sound >" << std::endl;
}