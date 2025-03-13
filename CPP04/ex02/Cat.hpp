#ifndef CAT_HPP
#define CAT_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Cat: public Aanimal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void    makeSound() const;
        Brain*  getBrain() const;
};

#endif