#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) {
	std::cout << "Character name constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &copy) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(const Character &copy) {
	std::cout << "Character assignation operator called" << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}


