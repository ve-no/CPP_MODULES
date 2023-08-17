#ifndef FragTrap_HPP
#define FragTrap_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& op);
		~FragTrap();
		void highFivesGuys();
		void attack(const std::string& target);
};

#endif
