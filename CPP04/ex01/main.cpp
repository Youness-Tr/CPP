# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    Animal *meta[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta[i] = new Dog();
        else 
            meta[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
        std::cout << meta[i]->getType() << std::endl;

    for (int i = 0; i < 4; i++)
        delete meta[i];

    Cat cat1;
    cat1.getBrain()->setIdea(0, "Chase mice");

    Cat cat2 = cat1; // Calls deep copy constructor

    std::cout << "cat1's Brain: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2's Brain: " << cat2.getBrain()->getIdea(0) << std::endl;
    return 0;
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// i->makeSound();//should not create a leak
// delete i;
// return 0;
// }