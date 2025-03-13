#include "Character.hpp"

Garbage *Character::collector;
Garbage *Character::tmp;
int Character::count = 0;

Character::Character(std::string name) : Name(name) {
    for (int i = 0; i < 4; ++i)
        materia[i] = NULL;
}

Character::Character(const Character& copy) {
    *this = copy;
}

Character& Character::operator=(const Character& copy) {
    if (this != &copy) {
        Name = copy.Name;
        for (int i = 0; i < 4; ++i) {
            if (materia[i]) //! here need to pay attention to the garbage collector
                delete materia[i];
            if (copy.materia[i])
                materia[i] = copy.materia[i]->clone();
            else
                materia[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    std::cout << "destractor of the character is called" << std::endl;
    count--;
    for (int i = 0; i <= 3; i++)
        delete materia[i]; //! still need to delete the adress of the materia if exists in garbage collector

    if (count <= 0)
        cleanUp();
}

std::string const & Character::getName() const {
    return Name;
}

void Character::equip(AMateria* m) {
    // std::cout << "mm is " << m->getType() << std::endl;
    for (int i = 0; i < 4; i++) {
        // std::cout << materia[i] << std::endl;
        // std::cout << i << std::endl;
        if (materia[i] == NULL) {
            // std::cout << "index is " << i << std::endl;
            materia[i] = m;
            // std::cout << "materia is " << materia[i]->getType() << std::endl;
            // std::cout << "Equiped " << m->getType() << " to " << Name << std::endl;
            return;
        }
        else if (materia[i] == m) {
            std::cout << "Already equiped" << std::endl;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

bool check_list(Garbage *list, AMateria *adr)
{

    while (list)
    {
        if (adr == list->adr)
            return false;
        list = list->next;
    }
    return true;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && materia[idx]){
        if (collector == NULL){
            collector = new Garbage(materia[idx]);
            tmp = collector;
        }
        else if (check_list(tmp, materia[idx]))
        {
            collector->next = new Garbage(materia[idx]);
            collector = collector->next;
        }
        std::cout << "Unequiped " << materia[idx]->getType() << " from " << Name << std::endl;
        materia[idx] = NULL;
    }
    else
        std::cout << "Invalid index" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 4 || idx < 0 || !materia[idx]){
        std::cout << "Invalid index" << std::endl;
        return;
    }
    materia[idx]->use(target);
}

void Character:: cleanUp()
{
    Garbage *t;
    while (tmp)
    {
        t = tmp;
        tmp = tmp->next;
        delete t;
    }
}