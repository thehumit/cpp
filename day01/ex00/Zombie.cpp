#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->announce();
}
