#include "Harl.hpp"

int main(int ac , char **av) {
	Harl harl;

	if (ac !=2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
