#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern() {}

AForm	*Intern::makeForm(std::string formName, std::string target)
{

	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm*	forms[] = {
		new RobotomyRequestForm( target ),
		new PresidentialPardonForm( target ),
		new ShrubberyCreationForm( target )
	};
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern create " << formName << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern can't create " << formName << " form" << std::endl;
	return NULL;
}




