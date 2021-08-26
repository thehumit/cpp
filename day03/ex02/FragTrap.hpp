#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap&	operator= (const FragTrap &cp);
	~FragTrap();
	void highFivesGuys(void);
};



