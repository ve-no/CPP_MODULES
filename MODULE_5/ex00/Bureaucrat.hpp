#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &copy);

		const std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

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


std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);




#endif
