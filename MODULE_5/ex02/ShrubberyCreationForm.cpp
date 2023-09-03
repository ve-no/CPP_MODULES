
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return (*this);
	AForm::operator=(copy);
	_target = copy._target;
	return (*this);
}

const std::string	&ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	// if (executor.getGrade() < getGradeToSign())
	// 	throw AForm::GradeTooLowException();
	if (!getSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getGradeToExecute())
		throw AForm::ExecuteException();
	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("File could not be opened");
	file << "               ,@@@@@@@,\n";
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o\n";
	file << "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'\n";
	file << "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'\n";
	file << "   %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'\n";
	file << "   `&%/ ` /%&'    |.|        / '|8'\n";
	file << "       |o|        | |         | |\n";
	file << "       |.|        | |         | |\n";
	file << "/./././././././././././././././.././.\n";
	file.close();
}
