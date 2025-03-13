#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "The Animal Default Constructor called >" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "The Animal Parameterized Constructor called >" << std::endl;
}

Animal::~Animal() {
    std::cout << "The Animal Destructor called >" << std::endl;
}

Animal::Animal(const Animal& other) {
    std::cout << "The Animal Copy Constructor called >" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "The Animal Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void Animal::setType(std::string type) {
    this->type = type;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "The Animal makes a sound >" << std::endl;
}