#ifndef Materiasource_HPP
#define Materiasource_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* Materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif