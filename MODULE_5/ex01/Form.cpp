#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
:_name(name),
_isSigned(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute) {}

Form::~Form() {}

const std::string Form::getName() const{
	return (_name);
}

bool Form::isSigned() const{
	return (_isSigned);
}

int Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() < _gradeToSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException() : msg("Grade is too hight!") {}

Form::GradeTooHighException::GradeTooHighException(const std::string& message) : msg(message) {}

Form::GradeTooHighException::~GradeTooHighException() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException() : msg("Grade is too low!") {}

Form::GradeTooLowException::GradeTooLowException(const std::string& message) : msg(message) {}

Form::GradeTooLowException::~GradeTooLowException() {}

const char *Form::GradeTooLowException::what() const throw()
{
	return msg.c_str();
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
  os << form.getName() << ", isSigned: " << form.isSigned() << ", gradeToSign: " << form.getGradeToSign() << ", gradeToExecute: " << form.getGradeToExecute();
  return os;
}
