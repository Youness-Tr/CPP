#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "The Brain Default Constructor called >" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "The Brain Copy Constructor called >" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "The Brain Copy Assignment Operator called >" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, std::string idea) {
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    return ideas[index];
}

Brain::~Brain() {}