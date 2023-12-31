#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = copy.type;
	*this->brain = *copy.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog barks: Woof!" << std::endl;
}
