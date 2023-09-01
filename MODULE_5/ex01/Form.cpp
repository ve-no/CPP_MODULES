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

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too hight!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
  os << form.getName() << ", isSigned: " << form.isSigned() << ", gradeToSign: " << form.getGradeToSign() << ", gradeToExecute: " << form.getGradeToExecute();
  return os;
}
