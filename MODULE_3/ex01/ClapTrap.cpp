#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	name_ = "default";
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
	std::cout << "ClapTrap " << name_ << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	name_ = name;
	hitPoints_ = 10;
	energyPoints_ = 10;
	attackDamage_ = 0;
	std::cout << "ClapTrap " << name_ << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	this->name_ = copy.name_;
	this->hitPoints_ = copy.hitPoints_;
	this->energyPoints_ = copy.energyPoints_;
	this->attackDamage_ = copy.attackDamage_;
	std::cout << "ClapTrap " << name_ << " created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& op) {
	if (this == &op)
		return (*this);
	this->name_ = op.name_;
	this->hitPoints_ = op.hitPoints_;
	this->energyPoints_ = op.energyPoints_;
	this->attackDamage_ = op.attackDamage_;
	return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name_ << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name_ << " attack " << target << " ,causing "
			  << attackDamage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name_ << " take " << amount << " of damage." << std::endl;
	hitPoints_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name_ << " is repaired " << amount << " of hit points." <<std::endl;
	hitPoints_ += amount;

}
