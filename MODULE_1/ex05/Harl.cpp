#include "Harl.hpp"


void Harl::debug() {
	std::cout << "DEBUG: Debug message\n";
}

void Harl::info() {
	std::cout << "INFO: Info message\n";
}

void Harl::warning() {
	std::cout << "WARNING: Warning message\n";
}

void Harl::error() {
	std::cout << "ERROR: Error message\n";
}

void Harl::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*fun[i])();
			return ;
		}
	}
}
