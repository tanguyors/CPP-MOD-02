#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"



class HumanA
{
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack() const;
};


#endif