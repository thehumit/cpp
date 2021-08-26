#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap 
    : virtual public ClapTrap
{
private:
    int _energyPointCP;
public:
    ScavTrap(std::string name = "Tquintan");
    ScavTrap& operator= (ScavTrap const &cp);
    ScavTrap(const ScavTrap &cp);
    virtual ~ScavTrap();
    int getEPCP();
    void attack(std::string const & target);
    void guardGate();
};

#endif