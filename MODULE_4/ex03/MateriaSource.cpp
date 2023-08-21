#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	std::cout << "MateriaSource default constructor called" << std::endl;
}



MateriaSource::MateriaSource(const MateriaSource &copy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_materia[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	std::cout << "MateriaSource assignation operator called" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_materia[i];
	}
	this->_count = copy._count;
	for (int i = 0; i < this->_count; i++) {
		this->_materia[i] = copy._materia[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->_count == 4 || !m)
		return ;
	this->_materia[this->_count] = m;
	this->_count++;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->_count; i++) {
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}


