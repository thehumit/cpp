#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_energyPointCP = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << name << "was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp)
    : ClapTrap(cp)
{
    (*this) = cp;
}

ScavTrap&	ScavTrap::operator= (ScavTrap const &cp)
{
    if (this == &cp)
        return (*this);
	this->_name = cp._name;
    this->_hitpoints = cp._hitpoints;
    this->_energyPoints = cp._energyPoints;
    this->_attackDamage = cp._attackDamage;
	return (*this);
}

int ScavTrap::getEPCP()
{
    return(this->_energyPointCP);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "SCAVTRAP " << this->_name 
        << " attacks " << target << " , causing " 
            << this->_attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " got in!!! AAAAAAAAA" << std::endl;
}