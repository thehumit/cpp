#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen Karen;
	int case_num;
	switch (ac)
	{
	case 2:
		break;
	default:
		return (0);
	}
	case_num = Karen.complain(av[1]);
	switch (case_num)
	{
		case 3:
			Karen.run(3);
			break ;
		case 2:
			Karen.run(2);
			break ;
		case 1:
			Karen.run(1);
			break ;
		case 0:
			Karen.run(0);
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return (0);
	}
	return (0);
}
