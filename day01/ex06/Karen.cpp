#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon \
for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra \
bacon cost more money. You don’t put enough! If you did I would not have to ask \
for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been \
	coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int Karen::complain(std::string level)
{
	int i = 0;
	void (Karen::*funcptr[5])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string strings[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level != strings[i] && i < 5)
		i++;
	return (i);
}

void Karen::run(int num)
{
	int i = 0;
	void (Karen::*funcptr[4])(void)= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < num)
		i++;
	while (i < 4)
	{
		(this->*funcptr[i])();
		i++;
	}
}
