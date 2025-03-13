# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // delete i;
    // delete j;
    // delete meta;

    std::cout << std::endl << "---------- THE WRONG ANIMAL TEST ----------" << std::endl << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();
    std::cout << cat->getType() << std::endl;
    wrong->makeSound();
    cat->makeSound();
    // delete wrong;
    // delete cat;
    return 0;
}