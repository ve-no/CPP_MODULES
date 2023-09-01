#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	~Form();
	const std::string getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &Bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(const std::string& message);
			~GradeTooHighException();
			virtual const char *what() const throw();
		private:
			std::string msg;
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(const std::string& message);
			~GradeTooLowException();
			virtual const char *what() const throw();
		private:
			std::string msg;
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
