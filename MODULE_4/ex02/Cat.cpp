#include "Cat.hpp"

Cat::Cat(){
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat meows: Meow!" << std::endl;
}
