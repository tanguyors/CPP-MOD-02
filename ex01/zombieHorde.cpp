#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
    setName(name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    if(N < 0)
    {
        return NULL;
    }
    Zombie* horde = new Zombie[N]; //création d'un tableau de zombie de nombre n
    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return horde;
}

void Zombie::announce()
{
    std::cout << name << ": "<< "BraiiiiiiinnnzzzZ" << std::endl;
}