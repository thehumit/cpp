#include "Zombie.hpp"

int main()
{
	Zombie *zomb_2 = zombideHorde(100, "Chmo");
	delete[] zomb_2;
	return(0);
}
