#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    brain = new Brain();
    std::cout << "The Dog Default Constructor called >" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "The Dog Parameterized Constructor called >" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "The Dog Copy Constructor called >" << std::endl;
    *this = other;
}

Dog::~Dog(){
    delete brain;
    std::cout << "The Dog destructore called >" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "The Dog Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        // this->brain = new Brain(*other.brain);
        this->brain = other.brain;
    }
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "The Dog makes a sound >" << std::endl;
}