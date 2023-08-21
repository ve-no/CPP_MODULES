#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria type constructor called" << std::endl;
	this->_type = type;
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
	this->_type = copy._type;
	this->_xp = copy._xp;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}

// int main() {
// 	AMateria *m = new AMateria();
// 	AMateria *n = new AMateria("Fire");
// 	AMateria *o = new AMateria(*n);
// 	AMateria *p = new AMateria();
// 	*p = *n;
// 	std::cout << m->getType() << std::endl;
// 	std::cout << n->getType() << std::endl;
// 	std::cout << o->getType() << std::endl;
// 	std::cout << p->getType() << std::endl;
// 	std::cout << m->getXP() << std::endl;
// 	std::cout << n->getXP() << std::endl;
// 	std::cout << o->getXP() << std::endl;
// 	std::cout << p->getXP() << std::endl;
// 	delete m;
// 	delete n;
// 	delete o;
// 	delete p;
// 	return 0;
// }



