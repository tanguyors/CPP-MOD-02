#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"



class HumanB
{
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void attack() const;
        void setWeapon(Weapon& weapon);
};


#endif