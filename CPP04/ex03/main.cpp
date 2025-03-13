#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
// std::cout << "tmp is" << tmp->getType() << std::endl;
// std::cout << "here" << std::endl;
me->equip(tmp);
std::cout << "here----------------------------------" << std::endl;
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
std::cout << "here----------------------------------" << std::endl;
me->use(0, *bob);
std::cout << "here----------------------------------" << std::endl;
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}