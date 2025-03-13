# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
const Aanimal* j = new Dog();
const Aanimal* i = new Cat();
// Aanimal test; // should not compile because Aanimal is abstract
delete j;//should not create a leak
i->makeSound();
delete i;
return 0;
}