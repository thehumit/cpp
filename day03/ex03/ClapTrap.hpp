#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name = "tquintan");
    ClapTrap(const ClapTrap &cp);
    ClapTrap&	operator= (const ClapTrap &cp);
    virtual ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
protected:
    std::string _name;
    int _hitpoints;
    int _energyPoints;
    int _attackDamage;
};

#endif