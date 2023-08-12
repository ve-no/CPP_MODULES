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

void complain(std::string level) {
	// std::map<std::string, void (Harl::*)()> levelMap;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// levelMap["DEBUG"] = &Harl::debug;
	// levelMap["INFO"] = &Harl::info;
	// levelMap["WARNING"] = &Harl::warning;
	// levelMap["ERROR"] = &Harl::error;

	// std::map<std::string, void (Harl::*)()>::iterator it = levelMap.find(level);
	// if (it != levelMap.end()) {
	// 	(this->*(it->second))();
	// } else {
	// 	std::cout << "Invalid level: " << level << std::endl;
	// }
}
