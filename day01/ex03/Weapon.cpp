#include "Weapon.hpp"

void Weapon::SetType(const std::string name)
{
	this->_type = name;
	
}

std::string Weapon::getType(void)
{
	return (this->_type);
}

Weapon::Weapon(std::string name)
{
	SetType(name);
}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}
