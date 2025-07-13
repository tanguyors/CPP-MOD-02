#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* monZombie = new Zombie(name); // ← crée le zombie sur le tas
    return monZombie; // ← retourne le pointeur
}