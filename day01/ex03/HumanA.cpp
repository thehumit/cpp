#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
}

void HumanA::setName(const std::string name)
{
	this->_name = name;
}

// void HumanA::setWeapon(Weapon &weapon)
// {
// 	this->_Weapon = weapon;
// }

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_Weapon.getType() << std::endl;
}

HumanA::~HumanA()
{

}
