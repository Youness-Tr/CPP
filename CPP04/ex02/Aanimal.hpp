#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class Aanimal {
    protected:
        std::string type;
    public:
        Aanimal();
        Aanimal(std::string type);
        Aanimal(const Aanimal& other);
        Aanimal& operator=(const Aanimal& other);
        virtual ~Aanimal();

        virtual void makeSound() const = 0;
        void   setType(std::string type);
        std::string getType() const;
};

#endif