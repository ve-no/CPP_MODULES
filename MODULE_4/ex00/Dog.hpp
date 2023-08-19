#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		virtual ~Dog();
		void makeSound() const;
};

#endif
