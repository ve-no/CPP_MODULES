#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"



int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* ppf;
	AForm* scf;
	AForm* form;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	form = someRandomIntern.makeForm("test", "Bender");

	std::cout << "----- ShrubberyCreationForm -----" << std::endl;
	try
	{
		if (!scf)
			throw std::exception();
		Bureaucrat b1("b1", 2);
		Bureaucrat b2("b2", 10);
		b1.signAForm(*scf);
		b1.executeForm(*scf);
		b2.signAForm(*scf);
		b2.executeForm(*scf);
		scf->execute(b1);
		scf->execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}

	std::cout << "----- RobotomyRequestForm -----" << std::endl;
	try
	{
		if (!rrf)
			throw std::exception();
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		b1.signAForm(*rrf);
		b1.executeForm(*rrf);
		b2.signAForm(*rrf);
		b2.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----- PresidentialPardonForm -----" << std::endl;
	try
	{
		if(!ppf)
			throw std::exception();
		Bureaucrat b1("b1", 80);
		Bureaucrat b2("b2", 150);
		b1.signAForm(*ppf);
		b1.executeForm(*ppf);
		b2.signAForm(*ppf);
		b2.executeForm(*ppf);
		ppf->execute(b1);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete rrf;
	delete ppf;
	delete scf;
	delete form;
}
