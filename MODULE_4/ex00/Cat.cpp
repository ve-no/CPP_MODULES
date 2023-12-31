#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "C at copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat meows: Meow!" << std::endl;
}
