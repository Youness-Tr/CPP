#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "The WrongAnimal Default Constructor called >" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "The WrongAnimal Parameterized Constructor called >" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "The WrongAnimal Destructor called >" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "The WrongAnimal Copy Constructor called >" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "The WrongAnimal Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "The WrongAnimal makes a sound >" << std::endl;
}

void   WrongAnimal::setType(std::string type) {
    this->type = type;
}   

std::string WrongAnimal::getType() const {
    return type;
}