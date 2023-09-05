#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("Bureaucrat", 1);
		// std::cout << b << std::endl;
		Form f("Form", 1, 1);
		// std::cout << f << std::endl;
		b.signForm(f);
		// std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrat", 15);
		// std::cout << b << std::endl;
		Form f("Form", 1, 10);
		// std::cout << f << std::endl;
		b.signForm(f);
		// std::cout << f << std::endl;
		Form ff("Form", 15, 1);
		b.signForm(ff);
		// std::cout << ff << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
