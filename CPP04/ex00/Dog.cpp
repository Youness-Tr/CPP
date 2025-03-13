#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "The Dog Default Constructor called >" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "The Dog Parameterized Constructor called >" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "The Dog Copy Constructor called >" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "The Dog Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "The Dog makes a sound >" << std::endl;
}