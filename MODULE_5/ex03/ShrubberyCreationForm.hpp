
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

	const std::string	&getTarget() const;

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif
