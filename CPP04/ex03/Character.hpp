#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "GarbageCollector.hpp"

class Character : public ICharacter
{
    private:
        std::string Name;
        AMateria* materia[4];
        static Garbage *collector;
        static Garbage *tmp;
        static int count;
    public:
        Character(std::string name);
        Character(const Character& copy);
        Character& operator=(const Character& copy);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        void cleanUp(void);
};

#endif