#include "AMateria.hpp"

AMateria::AMateria() {
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	// std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &copy) {
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	// std::cout << "AMateria assignation operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}


void AMateria::use(ICharacter& target) {
	(void)target;
}



