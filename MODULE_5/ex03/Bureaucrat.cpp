#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(75) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		_grade = copy._grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signAForm(AForm &aForm)
{
	try
	{
		aForm.beSigned(*this);
		std::cout << _name << " signs " << aForm.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot sign " << aForm.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " cannot execute " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too hight!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}
