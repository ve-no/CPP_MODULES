#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Animal type constructor called" << std::endl;
	this->type = type;
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
	this->type = copy.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound" << std::endl;
}



