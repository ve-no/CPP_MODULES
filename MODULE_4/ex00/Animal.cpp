#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Animal type constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = copy._type;
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::setType(std::string type) {
	this->_type = type;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound" << std::endl;
}



