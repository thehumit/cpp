#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string name);
	~Weapon();
	std::string getType(void);
	void SetType(const std::string type);
private:
	std::string _type;
};

#endif
