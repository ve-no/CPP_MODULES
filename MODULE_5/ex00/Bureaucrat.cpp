#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() : msg("Grade is too hight!") {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& message) : msg(message) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : msg("Grade is too low!") {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& message) : msg(message) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return msg.c_str();
}

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

Bureaucrat::~Bureaucrat()
{
}

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}
