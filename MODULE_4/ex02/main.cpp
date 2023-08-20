#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	Animal *k[2] = {new Dog(), new Cat()};

	std::cout << std::endl;
	for (int i = 0; i < 2; i++) {
		delete k[i];
	}

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;

	// j->makeSound(); //will output the cat sound!
	// i->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;
	return 0;
}
