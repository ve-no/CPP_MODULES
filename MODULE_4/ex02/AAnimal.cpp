
#include "AAnimal.hpp"


AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = copy._type;
	return *this;
}

std::string AAnimal::getType() const {
	return this->_type;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makes a sound" << std::endl;
}





