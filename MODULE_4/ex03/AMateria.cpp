#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria"), xp(0) {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type), xp(0) {
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	std::cout << "AMateria assignation operator called" << std::endl;
	this->type = copy.type;
	this->xp = copy.xp;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}

unsigned int AMateria::getXP() const {
	return this->xp;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	this->xp += 10;
}

AMateria* AMateria::clone() const {
	return new AMateria(*this);
}


