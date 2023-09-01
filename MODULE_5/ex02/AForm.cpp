#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &copy)
{
	if (this == &copy)
		return (*this);
	_signed = copy._signed;
	return (*this);
}

const std::string	&AForm::getName() const
{
	return (_name);
}

bool				AForm::getSigned() const
{
	return (_signed);
}

int					AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int					AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void				AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const AForm &aForm)
{
	out << aForm.getName() << ", form grade required to sign: " << aForm.getGradeToSign() << ", form grade required to execute: " << aForm.getGradeToExecute() << ", signed: " << aForm.getSigned();
	return (out);
}

