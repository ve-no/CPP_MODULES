#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		virtual ~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
