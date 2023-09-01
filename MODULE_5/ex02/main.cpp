#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	jim("Jim", 150);
	ShrubberyCreationForm	shrubbery("home");
	RobotomyRequestForm		robotomy("home");
	PresidentialPardonForm	presidential("home");

	std::cout << bob << std::endl;
	std::cout << jim << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << presidential << std::endl;

	std::cout << "-----" << std::endl;

	bob.signForm(shrubbery);
	bob.signForm(robotomy);
	bob.signForm(presidential);
	jim.signForm(shrubbery);
	jim.signForm(robotomy);
	jim.signForm(presidential);

	std::cout << "-----" << std::endl;

	bob.executeForm(shrubbery);
	bob.executeForm(robotomy);
	bob.executeForm(presidential);
	jim.executeForm(shrubbery);
	jim.executeForm(robotomy);
	jim.executeForm(presidential);

	std::cout << "-----" << std::endl;

	return (0);
}

