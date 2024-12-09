#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        std::string const getType(std::string type);
        void setType(std::string type);
};

#endif