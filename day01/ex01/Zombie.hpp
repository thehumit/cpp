#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(const std::string name);
		~Zombie(void);
		void announce(void) const;
		void setName(const std::string name);
	private:
		std::string _name;

};

void randomChump( std::string name );
Zombie* zombideHorde(int N, std::string name);

