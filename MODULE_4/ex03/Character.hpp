#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string const & name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string name;
		AMateria *inventory[4];
};

#endif
