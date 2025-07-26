#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
    this->weapon = 0;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if(!weapon)
    {
        std::cout << "Sorry you dont have Weapon zuuuuuuuu" << std::endl;
    }
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}