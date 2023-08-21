#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		virtual ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif
