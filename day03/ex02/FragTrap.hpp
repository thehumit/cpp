#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap&	operator= (const FragTrap &cp);
	~FragTrap();
	void highFivesGuys(void);
};

void highFivesGuys(void)
{
	std::cout << "Give highfive." << std::endl;
}

FragTrap&	FragTrap::operator= (const FragTrap &cp)
{
    if (this == &cp)
        return (*this);
	this->_name = cp._name;
    this->_hitpoints = cp._hitpoints;
    this->_energyPoints = cp._energyPoints;
    this->_attackDamage = cp._attackDamage;
	return (*this);
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << name << "was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp)
    : ClapTrap(cp)
{
    (*this) = cp;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed." << std::endl;
}

