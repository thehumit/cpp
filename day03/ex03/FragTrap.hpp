#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap 
    : virtual public ClapTrap
{
public:
	FragTrap(std::string name = "Tquintan");
	FragTrap&	operator= (FragTrap const &cp);
    FragTrap(const FragTrap &cp);
	virtual ~FragTrap();
	void highFivesGuys(void);
};

#endif