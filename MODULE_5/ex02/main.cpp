#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "----- ShrubberyCreationForm -----" << std::endl;
	try
	{
		Bureaucrat b1("b1", 2);
		Bureaucrat b2("b2", 10);
		ShrubberyCreationForm s1("s1");
		ShrubberyCreationForm s2("s2");
		b1.signAForm(s1);
		b1.executeForm(s1);
		b2.signAForm(s2);
		b2.executeForm(s2);
		s1.execute(b1);
		s2.execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----- RobotomyRequestForm -----" << std::endl;
	try
	{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		RobotomyRequestForm r1("r1");
		RobotomyRequestForm r2("r2");
		b1.signAForm(r1);
		b1.executeForm(r1);
		b2.signAForm(r2);
		b2.executeForm(r2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----- PresidentialPardonForm -----" << std::endl;
	try
	{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		PresidentialPardonForm p1("p1");
		PresidentialPardonForm p2("p2");
		b1.signAForm(p1);
		b1.executeForm(p1);
		b2.signAForm(p2);
		b2.executeForm(p2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
