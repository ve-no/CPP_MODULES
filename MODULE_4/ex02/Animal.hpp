#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal();
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const;

	protected:
		std::string type;
};


#endif

