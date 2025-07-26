#include "weapon.hpp"
Weapon::Weapon()
{
    
}
Weapon::Weapon(const std::string& WeaponName)
{
    this->type = WeaponName;
}
const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& nameofweapon)
{
    this->type = nameofweapon;
}