#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	j->makeSound(); //will output the cat sound!
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
}
