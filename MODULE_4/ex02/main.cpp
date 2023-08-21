#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const AAnimal* j = new Dog();
	AAnimal g = AAnimal();
	const AAnimal* i = new Cat();
	AAnimal *k[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		k[i]->makeSound();
		delete k[i];
	}
	delete j;
	// delete g;
	delete i;


	return 0;
}
