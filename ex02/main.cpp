#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club;
    club.setType("CLUB");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
    

