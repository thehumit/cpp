#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:
    public ScavTrap, public FragTrap
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

