#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap alik("Alik");
    ClapTrap pavel("Pavel");
    ClapTrap vanya("Vanya");
    alik.attack("Pavel");
    pavel.takeDamage(5);
    pavel.beRepaired(6);
    return (0);
}