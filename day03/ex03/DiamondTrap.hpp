#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:
    public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap(std::string name = "diamond");
    DiamondTrap(const DiamondTrap &cp);
    DiamondTrap& operator= (const DiamondTrap &cp);
    ~DiamondTrap();
    void getInfo();
    std::string getName();
    void whoAmI();
};

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->_energyPoints = this->ScavTrap::getEPCP();
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp)
{
    (*this) = cp;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap &cp)
{
    if (this == &cp)
        return (*this);
	this->_name = cp._name;
    this->_hitpoints = cp._hitpoints;
    this->_energyPoints = cp._energyPoints;
    this->_attackDamage = cp._attackDamage;
	return (*this);
}

std::string DiamondTrap::getName()
{
    return(this->_name);
}

void DiamondTrap::getInfo()
{
    std::cout << "Name " << this->_name << std::endl;
    std::cout << "Attack Damage " <<this->_attackDamage << std::endl;
    std::cout << "Energy points " <<this->_energyPoints << std::endl;
    std::cout << "Hitpoints " << this->_hitpoints << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "It's my DiamondTrap name: " << this->_name << std::endl;
    std::cout << "It's my ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " has been destroyed." << std::endl;
}
