#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int lev = 0;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            lev = i + 1;
            continue ;
        }
    }

    switch (lev) {
      case	1:
          this->debug();
      case	2:
          this->info();
      case	3:
          this->warning();
      case	4:
          this->error();
          break;
      default:
	  	  std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
