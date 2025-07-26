#ifndef ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    public:
        Zombie();
        Zombie(std::string name); // inutile car on appelle le constructeur par default lors d'une alloc de tab
        void announce();
        void setName(std::string name);
};
Zombie* zombieHorde(int N, std::string name);


#endif