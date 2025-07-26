#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    std::string type;
    public:
    Weapon();
    Weapon(const std::string& WeaponName);
    const std::string & getType() const;
    void setType( const std::string& nameofweapon);
};


#endif