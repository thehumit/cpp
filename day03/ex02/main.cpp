#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	tquintan;

	tquintan.attack("Bsophia");
	tquintan.takeDamage(10);
	tquintan.beRepaired(10);
	ScavTrap tquintan2 = tquintan;
	ScavTrap tquintan3;
	tquintan3 = tquintan;
	tquintan2.attack("Data Nicki");
	tquintan2.guardGate();
	tquintan3.guardGate();
}
