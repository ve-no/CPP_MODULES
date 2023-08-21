#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy) {
	std::cout << "Ice assignation operator called" << std::endl;
	this->type = copy.type;
	this->xp = copy.xp;
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->xp += 10;
}


