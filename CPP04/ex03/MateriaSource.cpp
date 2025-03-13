#include "MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for(int i = 0; i < 4; i++)
        Materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other){
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (this != &other)
    {
        for (int i = 0; i < 4; i++){
            if (Materias[i])
            {
                delete Materias[i];
            }
            if (other.Materias[i])
            {
                Materias[i] = other.Materias[i]->clone();
            }
            else 
            {
                Materias[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource: the dustractor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete Materias[i];
}

void MateriaSource::learnMateria(AMateria* m){
    if (!m)
    return;
    for (int i = 0; i < 4; i++)
    {
        if (Materias[i] == NULL){
            Materias[i] = m->clone();
            delete m;
            return;
        }
    }
}


AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (Materias[i] && Materias[i]->getType() == type)
        {
            return Materias[i]->clone();
        }
    }
    return NULL;
}