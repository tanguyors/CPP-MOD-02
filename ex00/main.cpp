#include "Zombie.hpp"

int main()
{
    Zombie* t = newZombie("Tanguy");
    t->announce();
    delete t;

    randomChump("Ayu");
    return 0;
}
