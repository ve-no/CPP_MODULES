#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name_ = "default";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "ScavTrap " << name_ << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	name_ = name;
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "ScavTrap " << name_ << " (created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->name_ = copy.name_;
	this->hitPoints_ = copy.hitPoints_;
	this->energyPoints_ = copy.energyPoints_;
	this->attackDamage_ = copy.attackDamage_;
	std::cout << "ScavTrap " << name_ << " created!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	if (this == &scav)
		return (*this);
	this->name_ = scav.name_;
	this->hitPoints_ = scav.hitPoints_;
	this->energyPoints_ = scav.energyPoints_;
	this->attackDamage_ = scav.attackDamage_;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name_ << " destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << name_ << " attack " << target << " ,causing "
			  << attackDamage_ << " points of damage!" << std::endl;
}
