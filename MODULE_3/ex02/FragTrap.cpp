#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name_ = "default";
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "FragTrap " << name_ << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	name_ = name;
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "FragTrap " << name_ << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	this->name_ = copy.name_;
	this->hitPoints_ = copy.hitPoints_;
	this->energyPoints_ = copy.energyPoints_;
	this->attackDamage_ = copy.attackDamage_;
	std::cout << "FragTrap " << name_ << " created!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
	if (this == &frag)
		return (*this);
	this->name_ = frag.name_;
	this->hitPoints_ = frag.hitPoints_;
	this->energyPoints_ = frag.energyPoints_;
	this->attackDamage_ = frag.attackDamage_;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name_ << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name_ << " have request a high five." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << name_ << " attack " << target << " ,causing "
			  << attackDamage_ << " points of damage!" << std::endl;
}
