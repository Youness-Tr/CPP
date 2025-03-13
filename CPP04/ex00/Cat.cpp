#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "The Cat Default Constructor called >" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "The Cat Parameterized Constructor called >" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "The Cat Copy Constructor called >" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "The Cat Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "The Cat makes a sound >" << std::endl;
}