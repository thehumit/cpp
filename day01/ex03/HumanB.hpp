#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string name);
	HumanB(const std::string name, Weapon &weapon);
	~HumanB();
	void attack();
	void setName(const std::string name);
	void setWeapon(Weapon &weapon);
private:
	std::string _name;
	Weapon *_Weapon;
};

#endif
