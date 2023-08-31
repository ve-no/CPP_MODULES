# include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat *bureaucrat2 = new Bureaucrat("bureaucrat2", 1);
		std::cout << *bureaucrat2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(...)
	{
		std::cerr << "Unknown exception\n";
	}
}
