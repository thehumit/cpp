#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name = "Tquintan");
    ClapTrap(const ClapTrap &cp);
    ClapTrap&	operator= (const ClapTrap &cp);
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
    std::string _name;
    int _hitpoints;
    int _energyPoints;
    int _attackDamage;
};