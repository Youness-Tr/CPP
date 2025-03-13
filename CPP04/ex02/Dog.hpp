#ifndef DOG_HPP
#define DOG_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal {
    private:
        Brain* brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void    makeSound() const;
};

#endif