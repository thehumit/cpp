#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name = "Tquintan");
    ScavTrap& operator= (const ScavTrap &cp);
    ScavTrap(const ScavTrap &cp);
    ~ScavTrap();
    void guardGate();
};