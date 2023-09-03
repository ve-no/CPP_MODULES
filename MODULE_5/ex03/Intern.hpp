#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Intern
{
private:
public:
	Intern();
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);
	~Intern();

	AForm	*makeForm(std::string formName, std::string target);
};

#endif
