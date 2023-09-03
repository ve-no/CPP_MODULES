#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

const std::string	&RobotomyRequestForm::getTarget() const { return (this->_target); }

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::ExecuteException();
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}
