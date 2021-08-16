#include "ClapTrap.hpp"

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " 
        << amount << " points of damage." << std::endl;
    this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " was repaired for " 
        << amount << " points." << std::endl;
    this->_hitpoints += amount;
}


void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name 
        << "attacks " << target << " , causing " 
            << this->_attackDamage << " points of damage!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
    : _hitpoints(10), _energyPoints(10), _attackDamage(0), _name(name)
{
    std::cout << name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    (*this) = cp;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap &cp)
{
	// std::cout << "Assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
	this->_name = cp._name;
    this->_hitpoints = cp._hitpoints;
    this->_energyPoints = cp._energyPoints;
    this->_attackDamage = cp._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been destroyed." << std::endl;
}