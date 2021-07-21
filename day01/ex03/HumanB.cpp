#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	setName(name);
}

HumanB::HumanB(const std::string name, Weapon &weapon)
{
	setWeapon(weapon);
	setName(name);
}

void HumanB::setName(const std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

}
