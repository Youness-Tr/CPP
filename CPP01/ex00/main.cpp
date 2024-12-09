#include "Zombie.hpp"


int main(){
    Zombie *zombie[6];
    for (int i = 0; i < 6; i++)
        {
            zombie[i] = newZombie("Zombie" + std::to_string(i));
            zombie[i]->announce();
        }
    randomChump("fooooo");
    for(int i = 0; i < 6; i++)
        delete zombie[i];
}
