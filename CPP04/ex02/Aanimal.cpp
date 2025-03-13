#include "Aanimal.hpp"

Aanimal::Aanimal() : type("Aanimal") {
    std::cout << "The Aanimal Default Constructor called >" << std::endl;
}

Aanimal::Aanimal(std::string type) : type(type) {
    std::cout << "The Aanimal Parameterized Constructor called >" << std::endl;
}

Aanimal::~Aanimal() {
    std::cout << "The Aanimal Destructor called >" << std::endl;
}

Aanimal::Aanimal(const Aanimal& other) {
    std::cout << "The Aanimal Copy Constructor called >" << std::endl;
    *this = other;
}

Aanimal& Aanimal::operator=(const Aanimal& other) {
    std::cout << "The Aanimal Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Aanimal::setType(std::string type) {
    this->type = type;
}

std::string Aanimal::getType() const {
    return type;
}

void Aanimal::makeSound() const {
    std::cout << "The Aanimal makes a sound >" << std::endl;
}