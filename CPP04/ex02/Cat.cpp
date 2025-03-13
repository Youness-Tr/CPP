#include "Cat.hpp"

Cat::Cat() : Aanimal("Cat"){
    brain = new Brain();
    std::cout << "The Cat Default Constructor called >" << std::endl;
}

Cat::Cat(std::string type) : Aanimal(type) {
    std::cout << "The Cat Parameterized Constructor called >" << std::endl;
}

Cat::Cat(const Cat& other) : Aanimal(other) {
    std::cout << "The Cat Copy Constructor called >" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "The Cat Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        // this->brain = new Brain(*other.brain);
        this->brain = other.brain;
    }
    return *this;
}

Cat::~Cat(){
    delete brain;
    std::cout << "The Cat destructore called >" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "The Cat makes a sound >" << std::endl;
}

Brain*  Cat::getBrain() const {
    return brain;
}