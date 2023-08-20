#ifndef AAANIMAL_HPP
#define AAANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;

		std::string getType() const;
	protected:
		std::string type;

};

#endif
