#include "Zombie.hpp"

int main(){
    Zombie *zombies = zombieHorde(30, "Zombie");
    for(int i = 0; i < 10; i++)
        zombies[i].announce();
    delete [] zombies;
}