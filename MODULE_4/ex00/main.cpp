#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongCat();
	const WrongAnimal* wrongI = new WrongCat();


	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	std::cout << wrongJ->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;

	std::cout << std::endl;

	wrongJ->makeSound(); //will output the cat sound!
	wrongI->makeSound();
	wrongMeta->makeSound();

	std::cout << std::endl;


	j->makeSound(); //will output the cat sound!
	i->makeSound();
	meta->makeSound();
	delete meta;

	delete wrongMeta;
	delete wrongI;
	delete wrongJ;
	delete j;
	delete i;
	return 0;
}
