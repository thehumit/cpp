#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	diamond;
	diamond.getInfo();

	diamond.attack("Evaluator");
	diamond.beRepaired(10);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	diamond.getInfo();

	DiamondTrap diamond2 = diamond;

	DiamondTrap	diamond3;
	
	diamond3 = diamond;

	diamond2.whoAmI();
	diamond3.whoAmI();
}